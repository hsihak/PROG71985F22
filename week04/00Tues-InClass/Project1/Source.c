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
int LargestOfThreeInts(int,int,int);

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
    return 0;
}

int LargestOfThreeInts(int x, int y, int z)
{
    int max;

    if(x > y)
        max = x;
    else
        max = y;

    if(max < z)
        max = z;

    return max;
}
