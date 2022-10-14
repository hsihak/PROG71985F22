#pragma once

#define MAXLEN	25

typedef struct professor {
	char name[MAXLEN];
	char dept[MAXLEN];
} PROFESSOR;

PROFESSOR CreateProfessor(char*, char*);

void PrintProfessor(PROFESSOR);