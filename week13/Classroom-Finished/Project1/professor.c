#define _CRT_SECURE_NO_WARNINGS
#include "professor.h"
#include "StringUtils.h"

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

PROFESSOR CopyProfessor(PROFESSOR src)
{
	return CreateProfessor(src.name, src.dept);
}

//char* GetNameFromProfessor(PROFESSOR p)		//VERY bad practice - don't do this!
//{
//	return p.name;
//}

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

void SaveProfessorToStream(PROFESSOR p, FILE* fp)
{
	fprintf(fp, "%s\n", p.name);
	fprintf(fp, "%s\n", p.dept);
}

PROFESSOR ReadProfessorFromStream(FILE* fp)
{
	char nameBuffer[LONGESTLINE];
	char deptBuffer[LONGESTLINE];

	fgets(nameBuffer, LONGESTLINE, fp);
	CleanNewLineFromString(nameBuffer);

	fgets(deptBuffer, LONGESTLINE, fp);
	CleanNewLineFromString(deptBuffer);

	return CreateProfessor(nameBuffer, deptBuffer);
}

bool CompareProfessor(PROFESSOR lhs, PROFESSOR rhs)
{
	return(strncmp(lhs.name, rhs.name, strlen(lhs.name)) == 0);
}

void DisposeProfessor(PROFESSOR p)
{
	// nothing
}