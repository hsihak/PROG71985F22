//arrays:  pass by value (NOT)   ==> pass by reference.

// PROG71985 F22 - Professor SteveH - Jun 2022

// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1         reviewed and updated
//      1.2     2022-May-20         reviewed

#include <stdio.h>
#define MONTHS 12

void displayArray(int[]);                   //form 1 - array style

void displayArrayByPointer(int*);           //form 2 - pointer style

int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	displayArray(days);                 //print before the change ('pass by value' style)
	displayArray(days);                 //print, but now notice the change (invalidating the pass-by-value claim)
	displayArrayByPointer(days);        // and print, then change back  (using classic 'pass by reference' style)

	displayArray(days);                 // and it's back!

                                        // this is again why scanf with %s needs no '&' in front of variable!!

	return 0;
}

void displayArray(int days[])
{
	int index;

	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);

	days[1] = 29;                                                      // notice we change the array after printing
    printf("----------\n");
}

void displayArrayByPointer(int* days)       // in point notation, *days is the address of the first element
{                                           // C uses the type (in this case int*) to determine how big each
	int index;                              // element is.

	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1,
			*(days + index));                                    // same as days[index] or days[0 + index]

	*(days + 1) = 28;                                                  // again, notice the change after printing
    printf("----------\n");
}
