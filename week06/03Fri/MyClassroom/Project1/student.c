#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <string.h>
#include <stdio.h>

STUDENT CreateStudent(char* Name, int StudentNum)
{
	STUDENT s;
	strncpy(s.name, Name, MAXSIZE);
	s.studentnum = StudentNum;
	return s;
}

char* GetName(STUDENT s)		//very very very very bad
{
	return s.name;
}

bool GetNameWithReturn(STUDENT s, char* buf)
{
	strncpy(buf, s.name, MAXSIZE);
	buf[MAXSIZE - 1] = '\0';

	if (strlen(buf) > 0)
		return true;
	else
		return false;
}

void PrintStudent(STUDENT s)
{
	printf("STUDENT: %s %d\n", s.name, s.studentnum);
}