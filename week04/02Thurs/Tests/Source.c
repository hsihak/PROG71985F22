#include "../Project1/utils.h"
#include <stdio.h>

// units tests for utils library
// steveh 

void main(void)
{
	int actual;

	printf("test 1 ");
	int expected = 3;
	actual = LargestOfThreeInts(1, 2, 3);
	if (actual == expected)
		printf("passed\n");
	else
		printf("fail\n");

	printf("test 2 ");
	expected = 3;
	actual = LargestOfThreeInts(3, 2, 1);
	if (actual == expected)
		printf("passed\n");
	else
		printf("fail\n");

	printf("test 3");
	expected = -1;
	actual = LargestOfThreeInts(-1, -4, -5);
	if (actual == expected)
		printf("passed\n");
	else
		printf("fail\n");
}