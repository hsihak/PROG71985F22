#include "utils.h"

// this is our implementation of our awesome utilities
// steveh prog71985 fall2022

                        // passed by value - make a copy, send to function, use, discard
int LargestOfThreeInts(int x, int y, int z)
{
    int max;

    if (x > y)
        max = x;
    else
        max = y;

    if (max < z)
        max = z;

    return max;
}
        // pass by value fails us here (the dicard)
        // instead use pass-by-reference
void swap(int* first, int* second)   // the * " the value of "
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
