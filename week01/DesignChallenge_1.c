#include <stdio.h>
//
// our goal:  write a program that accepts a number
// from user and converts from inch to cm an displays to user

int main(void)
{
//get input -> we need to have space to store another float
    float input;
    printf("Please enter size: ");
    scanf("%f", &input);

//convert - float/double
    float answer;
    answer = input * 2.54;

//display output
    printf("the conversion of %f  is %f\n", input, answer);

    
    return 0;
}
