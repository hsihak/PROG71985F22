#pragma once
#include <stdbool.h>

// some commenting  (please don't copy this)

#define MAXSIZE		25

typedef struct student
{
	char name[MAXSIZE];
	int studentnum;
} STUDENT;


STUDENT CreateStudent(char*, int);

char* GetNameFromStudent(STUDENT);
bool GetNameFromStudentWithReturn(STUDENT, char*);

void printStudent(STUDENT);