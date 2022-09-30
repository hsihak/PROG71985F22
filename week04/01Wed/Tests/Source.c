#include "../Project1/utils.h"
#include <stdio.h>

void main(void)
{
	int actual;
	int expected;
	
	expected = 3;
	printf("TEST 1: ");
	actual = LargestOfThreeInts(1, 2, 3);
	if (actual == expected)
		printf("pass\n");
	else
		printf("fail\n");

	expected = 3;
	printf("TEST 2: ");
	actual = LargestOfThreeInts(3, 2, 1);
	if (actual == expected)
		printf("pass\n");
	else
		printf("fail\n");

	expected = -1;
	printf("TEST 3: ");
	actual = LargestOfThreeInts(-1, -2, -99);
	if (actual == expected)
		printf("pass\n");
	else
		printf("fail\n");


}