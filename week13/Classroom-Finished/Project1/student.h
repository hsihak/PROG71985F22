#pragma once
#include <stdbool.h>
#include <stdio.h>

// interface for student ADT

#define MAXSIZE				25
#define LONGESTLINE		100

typedef struct student
{
	char name[MAXSIZE];
	int studentnum;
} STUDENT;


STUDENT CreateStudent(char*, int);
STUDENT CopyStudent(STUDENT);

// char* GetNameFromStudent(STUDENT);								do not use this - dangerous
bool GetNameFromStudentWithReturn(STUDENT, char*);

void PrintStudent(STUDENT);
void SaveStudentToStream(STUDENT, FILE*);
STUDENT ReadStudentFromStream(FILE*);
void DisposeStudent(STUDENT);

bool CompareStudent(STUDENT, STUDENT);