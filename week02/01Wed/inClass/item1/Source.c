#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// simple program to say hello world
// and more
// prog71985 fall22
// steve h 

int main(void)
{
	//get input from user
	char userInput[10];
	printf("please enter name: ");
	scanf("%s", userInput);
	

	//display output
	printf("hello %s\n",userInput);	// \n is newline

	return 0;
}