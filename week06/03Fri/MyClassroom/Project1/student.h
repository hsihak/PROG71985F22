#pragma once

#include <stdbool.h>

// student interface
// in class - prog71985 - steveh - fall2022

// we talked about this, but didnt create the files.  i did.

#define MAXSIZE		25

typedef struct student {
	char name[MAXSIZE];
	int studentnum;
} STUDENT;

STUDENT CreateStudent(char*, int);

char* GetName(STUDENT);
bool GetNameWithReturn(STUDENT, char*);

void PrintStudent(STUDENT);