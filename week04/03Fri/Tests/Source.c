#include "../Project1/utils.h"
#include <stdio.h>


// our awesome tests
// steveh

void main(void)
{
	int expected;
	int actual;

	printf("test 1 ");
	expected = 3;
	actual = LargestOfThreeInts(1, 2, 3);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");


	printf("test 2 ");
	expected = 3;
	actual = LargestOfThreeInts(3, 2, 1);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");

	printf("test 3 ");
	expected = -1;
	actual = LargestOfThreeInts(-3, -2, -1);
	if (expected == actual)
		printf("pass\n");
	else
		printf("fail\n");
}