#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>
#include <string.h>

// student impl.
// steveh prog71985 fall2022 week06

STUDENT CreateStudent(char* name, int StudentNum)
{
	STUDENT s;
	strncpy(s.name, name, MAXSIZE);
	s.studentnum = StudentNum;
	return s;
}

char* GetNameFromStudent(STUDENT s)
{
	return s.name;
}

bool GetNameFromStudentWithReturn(STUDENT s, char* buffer)
{
	strncpy(buffer, s.name, MAXSIZE);
	buffer[MAXSIZE - 1] = '\0';

	// not sure this is perfect, but i dont know what else to do
	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}

void printStudent(STUDENT student)
{
	printf("STUDENT: %s, %d\n", student.name, student.studentnum);
}
