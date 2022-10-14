#define _CRT_SECURE_NO_WARNINGS

#include "student.h"
#include <string.h>
#include <stdio.h>

// impl of student
// prog71985, steveh, fall2022

STUDENT CreateStudent(char* Name, int StudentNum)
{
	STUDENT s;
	strncpy(s.name, Name, MAXLEN );
	s.studentnum = StudentNum;
	return s;
}


char* GetName(STUDENT s)
{
	return s.name;
}

bool GetNameWithReturnValue(STUDENT s, char* buffer)
{
	strncpy(buffer, s.name, MAXLEN);
	buffer[MAXLEN] = '\0';

	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}


void PrintStudent(STUDENT s)
{
	printf("STUDENT: %s: %d\n", s.name, s.studentnum);
}