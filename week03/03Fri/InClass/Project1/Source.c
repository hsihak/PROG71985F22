#include<stdio.h>
#include <stdbool.h>

// model a school term.  and more
// steveh - prog71985 - fall 2022
//
// the magical ones (from my imagination)
#define STARTINGWEEK	3		// we did this example on the 3rd week of the term
// the constants
#define WEEKSINTERM		15
#define SUCCESSWEEK		8
#define MIDTERMWEEK		7
#define FINALWEEK		15


int main(void)
{
	size_t currentWeek = STARTINGWEEK;
	bool todayIsChristmas = false;
	size_t daysToChristmas = 93;

	// for : for an interval  from lower to higher 
	// do... while  :  // execute body at least 1 timne or more
	while (currentWeek <= WEEKSINTERM) // execute body  0 or more times
	{
		printf("week %d ", (int)currentWeek);

		switch (currentWeek)
		{
			case SUCCESSWEEK: printf("- woohoo no classes this week");
							  break;
			case MIDTERMWEEK: printf("- midterm");
							  break;
			case FINALWEEK: printf("- final exam");
							break;
			default: break;
		}





		//if (currentWeek == SUCCESSWEEK)
		//	printf("- woohoo no classes this week");
		//else
		//{
		//	if (currentWeek == MIDTERMWEEK)
		//		printf("- midterm");
		//	else if (currentWeek == FINALWEEK)
		//		printf("- final");
		//	else
		//		;
		//}


		printf("\n");
		//currentWeek = currentWeek + 1;	//simple increment
		//currentWeek += 1;	// add 1 and assign back (same as above)
		currentWeek++;  //third version 
		daysToChristmas -= 7;
	}

	if (daysToChristmas == 0)
		todayIsChristmas = true;

	if (!todayIsChristmas)
		printf("merry christmas\n");

	printf("the term is over.\n");
	return 0;
}
