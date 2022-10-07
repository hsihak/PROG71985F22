//strings

// PROG71985 F22 - Professor SteveH - Jun 2022
//
// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed

#include <stdio.h>

int main(void)
{
	const char stringLiteralWithStaticInitialization[] = "this is defined and stored as a constant";
	// const-correctness is a good habit to get into.
	// also, notice I let the compiler calculate the size of the string.

	char misMatchedSize[12] = "hello";
	// both the last char and the unused will be initialized to \0.

	char manualAssignment[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	// if it do this manually, i must null the last digit

	printf("1. %s\n", misMatchedSize);
	misMatchedSize[0] = 'H';
	// elements in strings can be adjusted (unless const)

	char* pointerString = "this string is dynamically allocated/assigned";   //this should be const.

	char x = *(pointerString + 2);      //this is allowed,
	printf("2. %c\n", x);

	*(pointerString + 2) = 'I';           //will compile, but not run, because the string is considered const
	printf("3. %s\n", pointerString);

	printf("\n");

	pointerString = "new string";      //but this is allowed

	printf("4. %s\n", pointerString);
	printf("\n");

	return 0;
}

// my notes on commadn line debugging
// 1. gcc -g 05Strings.c
// 2. lldb ./a.out
//      a.   b main             to set a breakpoint
//      b.   r                  to start the program running
//      c.   gui                to change into gui mode
//      d.   s                  to step through, observing the state of the variables.
//      e.   esc when crashes then quit   
