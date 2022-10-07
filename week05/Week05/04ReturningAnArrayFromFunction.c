//returning an array..
//
// spoiler alert:  this doesn't work.  See "example03improved" for a working 
//    alternative.  The working alternative requires the use of heap memory allocations
//    which carry a few conditions.  More on this later...

// PROG71985 F22 - Professor SteveH - Jun 2022
//

// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed

#include <stdio.h>
#define MONTHS 12

void displayArray(int*);

int* generateArray();       // create an array in a function and return the address of the array

int main(void)
{
	int* days = generateArray();
	//memory location of the first elelement
	
	displayArray(days);

	return 0;
}

void displayArray(int* days)
{
	int index;

	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);

	days[1] = 29;
}

int* generateArray()
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	// nothing could be more simple...  however, this doesn't work!
	//     but if we think on it, this array has a local scope, created on the stack, and at the end (the return), the
	//     local variables (and stack) are destroyed.  Thus, the memory address being returned to the caller is
	//     no longer valid.
	// for now, we have to declare the days array as *static*  ==> static int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	// of course, the use of static often gets programmers into trouble: https://stackoverflow.com/questions/572547/what-does-static-mean-in-c
	return days;
}
