#include "student.h"
#include <stdio.h>
#include <stdbool.h>

// main program
// MyClassroom
// prog71985 steveh fall2022

int main(void)
{
	STUDENT bobby = CreateStudent("bobby", 12345678);

	printf("EXTRACT %s\n", GetName(bobby));  // float GetInput()

	char buffer[MAXSIZE];
	bool isValid = GetNameWithReturn(bobby, &buffer);

	PrintStudent(bobby);
}