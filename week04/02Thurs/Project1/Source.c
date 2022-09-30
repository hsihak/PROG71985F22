#define _CRT_SECURE_NO_WARNINGS

#include "utils.h"
#include <stdio.h>
#include <stdlib.h>


// write a program that takes 3 ints from user, separated by a space
// and prints the largest of the 3 to the screen.
//
// prog71985 - steveh - fall2022
//
// the code needs to be written before it speaks to me
//


int main(void)
{
    // write me a function that swaps 2 ints.
    int i = 5;
    int h = 10;
    printf("i=%d, h=%d\n", i, h);
    swap(&i, &h);
    printf("i=%d, h=%d\n", i, h);


    int a, b, c;
    printf("enter 3 numbers, separated by a space ");
    if(scanf("%d %d %d", &a, &b, &c) != 3)            // ==> " & the address of " 
    {
        printf("you didnt enter 3 ints\n");
        exit(1);
    }
    auto max = LargestOfThreeInts(a, b, c);

    printf("max is %d\n", max);
    return 0;
}
