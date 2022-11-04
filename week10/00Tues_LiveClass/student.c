#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include "StringUtils.h"

#include <stdio.h>
#include <string.h>

// student impl.
// steveh prog71985 fall2022 week06

STUDENT CreateStudent(char* name, int StudentNum)
{
	STUDENT s;
	strncpy(s.name, name, MAXSIZE);
	s.studentnum = StudentNum;
	return s;
}

// char* GetNameFromStudent(STUDENT s)		//VERY bad practice - don't do this!
// {
// 	return s.name;
// }

bool GetNameFromStudentWithReturn(STUDENT s, char* buffer)
{
	strncpy(buffer, s.name, MAXSIZE);
	buffer[MAXSIZE - 1] = '\0';

	// not sure this is perfect, but i dont know what else to do
	if (strlen(buffer) > 0)
		return true;
	else
		return false;
}

void PrintStudent(STUDENT student)
{
	printf("STUDENT: %s, %d\n", student.name, student.studentnum);
}

void SaveStudentToStream(STUDENT s, FILE* fp)
{
	fprintf(fp, "%s\n", s.name);
	fprintf(fp, "%d\n", s.studentnum);
}

STUDENT ReadStudentFromStream(FILE* fp)
{
	char fileBuffer[LONGESTLINE];

	fgets(fileBuffer, LONGESTLINE, fp);
	CleanNewLineFromString(fileBuffer);

	int readStudentNumber;
	if ((fscanf(fp, "%d\n", &readStudentNumber)) != 1)
	{
		fprintf(stderr, "Possible data error in Student record\n");
		readStudentNumber = -1;
	}

	return CreateStudent(fileBuffer, readStudentNumber);
}