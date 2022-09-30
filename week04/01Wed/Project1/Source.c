#include "utils.h"

#define _CRT_SECURE_NO_WARNINGS
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
    int a, b, c;
    printf("enter 3 numbers, separated by a space ");
    if(scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("you didnt enter 3 ints\n");
        exit(1);
    }
    int max = LargestOfThreeInts(a, b, c);
    printf("max is %d\n", max);

    // given an h and i, swap them
    int h = 99;
    int i = 10;
    printf("pre  h=%d, i=%d\n", h, i);

    // the fix:  
    // 1. remove those accidental * from a and b
    // 2. update the formal defintion in .h
    // 3. add the missing * to correct params (in function)
    
    //  the & ->  the address of 
    swap(&h, &i);  //functions can only return 1 thing (by defintion)
    printf("post h=%d, i=%d\n", h, i);
    // now h == 10 and i = 99

    return 0;
}
