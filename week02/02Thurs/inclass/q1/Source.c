#include <stdio.h>

// write the standard hello name
//   prompt for username
// steve h fall 2022
//
//
int main(void)
{
	//get a name.
	char userInput[10];
	printf("Please enter name: ");
	scanf("%s", userInput);


	//print output
	printf("hello %s\n", userInput);    // \n means newline
}