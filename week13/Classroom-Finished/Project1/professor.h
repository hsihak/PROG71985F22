#pragma once
#include <stdbool.h>
#include <stdio.h>

// interface for professor ADT
// prog71985 - fall22 - classwork

#define MAXSIZE			25
#define LONGESTLINE		100

typedef struct professor
{
	char name[MAXSIZE];
	char dept[MAXSIZE];
} PROFESSOR;

PROFESSOR CreateProfessor(char*, char*);
PROFESSOR CopyProfessor(PROFESSOR);

//char* GetNameFromProfessor(PROFESSOR);								- do not use - dangerous
bool GetNameFromProfessorWithReturn(PROFESSOR, char*);

void PrintProfessor(PROFESSOR);

void SaveProfessorToStream(PROFESSOR, FILE*);
PROFESSOR ReadProfessorFromStream(FILE*);

bool CompareProfessor(PROFESSOR, PROFESSOR);

void DisposeProfessor(PROFESSOR);