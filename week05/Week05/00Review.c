#include <stdio.h>

// review of pass-by-value and pass-by-reference
// steveh - week05 - prog71985 - fall22

void SwapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SwapByReference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(void)
{
    printf("By value:\n");
    int value1= 5;
    int value2= 10;
    printf("value1=%d value2=%d\n", value1, value2);
    SwapByValue(value1,value2);
    printf("value1=%d value2=%d\n", value1, value2);

    printf("\nBy reference:\n");
    printf("value1=%d value2=%d\n", value1, value2);
    SwapByReference(&value1,&value2);
    printf("value1=%d value2=%d\n", value1, value2);
    return 0;
}