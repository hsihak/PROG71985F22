#define _CRT_SECURE_NO_WARNINGS
#include "professor.h"
#include <stdio.h>
#include <string.h>

// professor impl.
// steveh prog71985 fall2022 week06

PROFESSOR CreateProfessor(char* name, char* dept)
{
	PROFESSOR p;
	strncpy(p.name, name, MAXSIZE);
	strncpy(p.dept, dept, MAXSIZE);
	return p;
}

char* GetNameFromProfessor(PROFESSOR p)
{
	return p.name;
}

bool GetNameFromProfessorWithReturn(PROFESSOR p, char* buffer)
{
	strncpy(buffer, p.name, MAXSIZE);
	buffer[MAXSIZE - 1] = '\0';

	// not sure this is perfect, but i dont know what else to do
	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}

void PrintProfessor(PROFESSOR p)
{
	printf("PROFESSOR: %s, %s\n", p.name, p.dept);
}
