#pragma once

#define MAXSIZE		25

typedef struct student
{
	char name[MAXSIZE];
	int studentnum;
} STUDENT;


STUDENT CreateStudent(char[], int);


void printStudent(STUDENT);