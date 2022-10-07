#include "student.h"
#include <stdio.h>

// classroom
// thursday - prog71985
//steveh


int main(void)
{
	STUDENT bobby = CreateStudent("bobby", 12345678);

	printf(bobby.name);

	printf(GetName(bobby));

	PrintStudent(bobby);

	return 0;
}