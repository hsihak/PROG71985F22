#pragma once
#include <stdbool.h>

// some commenting  (please don't copy this)

#define MAXSIZE		25

typedef struct professor
{
	char name[MAXSIZE];
	char dept[MAXSIZE];
} PROFESSOR;


PROFESSOR CreateProfessor(char*, char*);

char* GetNameFromProfessor(PROFESSOR);
bool GetNameFromProfessorWithReturn(PROFESSOR, char*);

void printProfessor(PROFESSOR);
