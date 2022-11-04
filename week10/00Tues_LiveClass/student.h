#pragma once
#include <stdbool.h>
#include <stdio.h>

// some commenting  (please don't copy this)

#define MAXSIZE			25
#define LONGESTLINE		100

typedef struct student
{
	char name[MAXSIZE];
	int studentnum;
} STUDENT;


STUDENT CreateStudent(char*, int);

//char* GetNameFromStudent(STUDENT);		//so bad.  never do this!
bool GetNameFromStudentWithReturn(STUDENT, char*);

void PrintStudent(STUDENT);
void SaveStudentToStream(STUDENT, FILE*);
STUDENT ReadStudentFromStream(FILE*);