#pragma once
#include <stdbool.h>

// interface of student
// steveh prog71985 2022

#define MAXLEN		25

typedef struct student
{
	char name[MAXLEN];
	int studentnum;
} STUDENT;

STUDENT CreateStudent(char*, int);

char* GetName(STUDENT);
bool GetNameFromStudentWithReturn(STUDENT, char*);

void PrintStudent(STUDENT);