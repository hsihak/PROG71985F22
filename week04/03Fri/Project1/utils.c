#include "utils.h"

// the impl. of our awesome library.
// stevh prog71985 fall2022

int LargestOfThreeInts(int x, int y, int z)
{
    int max;

    if (x < y)
        max = x;
    else
        max = y;

    if (max < z)
        max = z;

    return max;
}

void swap(int* a, int* b)  // * => 'the value at'
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
