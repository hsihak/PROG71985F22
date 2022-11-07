#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include "StringUtils.h"
#include "Error.h"

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


void PrintStudent(STUDENT student)
{
	printf("STUDENT: %s, %d\n", student.name, student.studentnum);
}
