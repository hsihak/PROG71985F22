#include <stdio.h>
#include <stdbool.h>
// "The code needs to be written before it speaks to me"
//					Unknown, Sep 2022
//
// program to model the school term.  and more
// steveh - prog71985 fall 2022
//
// these are the magical ones, appearing out of thin air:
#define STARTINGWEEK	3		// we are starting at week 3.  my bad
#define CHRISTMASDAYSAWAYTODAY	95  //as on sept 21, 95 days to go
//defined constants:
#define WEEKSINTERM		15
#define SUCCESSWEEK		8
#define MIDTERMWEEK		7
#define FINALEXAMWEEK	15
#define INTERSESSION	16
#define DAYSINAWEEK		7

int main(void)
{
	bool todayIsChristmas = false;
	size_t currentWeek = STARTINGWEEK;
	size_t daysTillChristmas = CHRISTMASDAYSAWAYTODAY;

	// for --> specify start, increment, and exit great for an arbitrary interval
	// do... while()  exit check in the while (at the end):  1 or more times
	// while: 0 or more times
	while (currentWeek <= WEEKSINTERM)	//in paren, yes/no question for continue or exit
	{
		printf("week %d ", (int)currentWeek);

		switch (currentWeek)
		{
			//case(INTERSESSION):  won't run because of upper limit on while
			case(SUCCESSWEEK):	printf("WooHoo no classes");
								break;
			case(MIDTERMWEEK):	printf("midterm");
								break;
			case(FINALEXAMWEEK):printf("final");
								break;
			default: break;
		}
		//old, delete if desired
		//if (currentWeek == SUCCESSWEEK)	// = is for assignment, == is yes/no comparison
		//	printf("WooHoo success week");
		//else      //for all cases not currentweek == 8...
		//{ 
		//	if (currentWeek == MIDTERMWEEK)
		//		printf("midterm");
		//	else if (currentWeek == FINALEXAMWEEK)
		//		printf("final");
		//}


		printf(" (%d days till Christmas)\n", (int)daysTillChristmas);
		currentWeek++;		// increment after use
		if (daysTillChristmas == 0)
			todayIsChristmas = true;
		daysTillChristmas -= DAYSINAWEEK;
	}

	printf("the term is done.\n");

	if (!todayIsChristmas)						// ! is logical NOT	
		printf("boohoo its not christmas!\n");

	return 0;
}