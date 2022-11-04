#include "student.h"
#include <stdio.h>

// our starting point for week10 tuesday class
// we wish to take student from stack allocated to heap allocated
//
// to start i simply added the existing student component (student.[ch]) to this
// project

int main(void)
{
	STUDENT one;
	printf("size of uninitialized struct: %d\n", (int)sizeof(one));

	STUDENT two = CreateStudent("two", 12345);
	printf("size of initialized struct: %d\n", (int)sizeof(two));
	// no surprises at this point, when declared, a struct has it's alloctions
	// set - this is why we copy a string into a struct member string (overwriting the 0s)

	STUDENT* three = &two;
	printf("size of pointer to initialized struct: %d\n", (int)sizeof(three));	
	// hopefully no surprise here either - a single address is smaller than the whole
	// struct.  
	// For me, visualizing programs in a 32-bit world is a bit more natural, so I often
	// think (and say) 4 bytes (or DWORD - double word) for an address, when it should 
	// be 8 bytes or QWORD (quad word) for 64 bit computing.
	
	return 0;
}