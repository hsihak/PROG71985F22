#include <stdio.h>

// simple hello <name> program
// and prompt for name
// steve h fall 2022


int main(void)
{
	// prompt name
	char input[12];
	printf("Please enter name: ");
	scanf_s("%s", input,12);

	//print output
	printf("hello %s\n", input);   // \n is newline

	return 0;
}