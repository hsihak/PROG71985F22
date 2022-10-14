#include "student.h"
#include "professor.h"

#include <stdio.h>
#include <stdbool.h>

// the classroom
// prog71985 fall2022 steveh
// in week06

int main()
{
	STUDENT bobby = CreateStudent("bobby jones", 12345678);
	printf("NAME: %s\n", GetNameFromStudent(bobby));
	char buffer[MAXSIZE];
	bool validName = GetNameFromStudentWithReturn(bobby, &buffer);
	printf("BUFFER: %s\n", buffer);
	printStudent(bobby);


	PROFESSOR steve = CreateProfessor("steve he", "acsit");
	printf("NAME: %s\n", GetNameFromProfessor(steve));
	validName = GetNameFromProfessorWithReturn(steve, &buffer);
	printf("BUFFER: %s\n", buffer);
	printProfessor(steve);

	return 0;
}