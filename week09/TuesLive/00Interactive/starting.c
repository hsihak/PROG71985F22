#include <stdio.h>

// 71985 - steve

int main(void)
{
    printf("enter a number: ");
    int a;
    scanf("%d", &a);

    for(int i=a; i<a+11; i++)
        printf("%d\n", i);
}