#include <stdio.h>

// the code had to be written before it can speak to me.

// program to model a school term.  and more
// steveh - prog71985 - fall 2022

// my choices
#define  STARTINGWEEK		3			// we chose to start here
// the constants
#define WEEKSPERTERM		15
#define SUCCESSWEEK			8
#define MIDTERMEXAM			7
#define FINALEXAM			15
int main(void)
{
	size_t currentWeek = STARTINGWEEK; 

	// for -> great for a known range
	// do... while  --> executes at least one time
	while (currentWeek <= WEEKSPERTERM)		//  must happen 0 or more times
	{
		printf("week %d ", (int)currentWeek);

		switch (currentWeek)
		{
			case SUCCESSWEEK: {
				printf(" -woohoo no class this week");
				break;
			}
			case MIDTERMEXAM: printf("midterm");
							  break;
			case FINALEXAM:	  printf("final");
							  break;
			default: break;

		}
		//if (currentWeek == SUCCESSWEEK)							// = is assignment, == is evaluation (are they equal)
		//	printf(" -woohoo no class this week");
		//else
		//{
		//	if (currentWeek == MIDTERMEXAM)
		//		printf("midterm");
		//	else if (currentWeek == FINALEXAM)
		//		printf("final");
		//	else
		//		;
		//}

		printf("\n");
		currentWeek++;			// increment by 1
	}

	printf("the term is done\n");
	return 0;
}

