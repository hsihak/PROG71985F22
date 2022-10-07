// simple array introduction -- prints the days for each month 
// PROG71985 F22 - Professor SteveH - Jun 2022
//
// borrowed from textbook

#include <stdio.h>

#define MONTHS 12
#define LEAPYEAR 1

int main(void)
{
    int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };     //specifying MONTHS is optional
    int anotherDays[MONTHS];
    int index;

    if (LEAPYEAR)
        days[1] = 29;

    //anotherDays = days;                                           *NOT ALLOWED
    
    //days[13] = 5;                                                 *OUT of BOUNDS

    for (index = 0; index < MONTHS; index++)            //simple array iteration
    {
        // anotherDays[index] = days[index];                        //we must duplicate arrays by visiting all elements
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }


    return 0;
}
