#include "utils.h"


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

void swap(int* a, int* b)
{
    int temp = *a;   // the value at a
    *a = *b;   // thew values at a is replaced with the gvaLUE AT B
    *b = temp;
}