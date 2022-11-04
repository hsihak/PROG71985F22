#define _CRT_SECURE_NO_WARNINGS
#include "classroom.h"

#include <stdio.h>
#include <string.h>

// implemenation of classroom
// stveeh - prog71985 - fall2022 - week09


CLASSROOM CreateClassroom(char* Name) 
{
	CLASSROOM c;
	strncpy(c.name, Name, MAXLEN);
	c.currentNumber = 0;
	return c;
}

int GetClassroomCapacity(CLASSROOM c)
{
	return MAXPARTICIPANTS;
}

bool IsClassroomFull(CLASSROOM c)
{
	if(c.currentNumber >= MAXPARTICIPANTS)
		return true;
	else
		return false;
}

bool AddParticipantToClassroom(CLASSROOM* c, PARTICIPANT p)
{
	if (!IsClassroomFull(*c))
	{
		c->ps[c->currentNumber++] = p;
		return true;
	}
	else
		return false;
}

PARTICIPANT GetParticipantFromClassroom(CLASSROOM c)
{

}

bool SaveClassroomToDisk(CLASSROOM c , char* filename)
{
	FILE* fp;
	if ((fp = fopen(filename, "w")) == NULL)
		return false;

	fprintf(fp, "%s\n", c.name);
	fprintf(fp, "%d\n", c.currentNumber);
	for (int i = 0; i < c.currentNumber; i++)
	{
		is c.ps[i].type a student
			fprintf(fp, "STUD")
			write student
	else if p is prof
			write prof
	}
}

bool LoadClassroomFromDisk(CLASSROOM* c, char* filename)
{

}