#pragma once
#include <stdbool.h>
#include <stdio.h>

// some commenting  (please don't copy this)

#define MAXSIZE			25
#define LONGESTLINE		100

typedef struct professor
{
	char name[MAXSIZE];
	char dept[MAXSIZE];
} PROFESSOR;


PROFESSOR CreateProfessor(char*, char*);

char* GetNameFromProfessor(PROFESSOR);
bool GetNameFromProfessorWithReturn(PROFESSOR, char*);

void PrintProfessor(PROFESSOR);

void SaveProfessorToStream(PROFESSOR, FILE*);
PROFESSOR ReadProfessorFromStream(FILE*);
