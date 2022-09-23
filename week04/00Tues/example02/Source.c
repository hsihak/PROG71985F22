//
// Week 4 - example2
//		textbook example 1 - using functions with arguments and return values
//                                          *except* we have now broken this out into multiple files.
//
// PROG71985 - F22
// Professor SteveH - Sept 2022
//
// revision history
//		1.0		2020-June-10			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
// 
// this time I am using "scanf_s" rather than "scanf" with that preprocessor directive.

#include <stdio.h>
#include "MathHeader.h"

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf_s("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);   // function call
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

