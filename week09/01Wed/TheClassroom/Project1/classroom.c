#define _CRT_SECURE_NO_WARNINGS
#include "classroom.h"
#include <stdio.h>
#include <string.h>

// some words about implementation of classroom
// steveh - week9 - prog71985 - fall22

CLASSROOM CreateClassroom(char* name)
{
	CLASSROOM c;
	c.currentNumber = 0;
	strncpy(c.name, name, MAXSIZE);
	return c;
}

int GetClassroomCapacity(CLASSROOM c)
{
	return MAXPARTICIPANTS;
}

bool IsClassroomFull(CLASSROOM c)
{
	if (c.currentNumber >= MAXPARTICIPANTS)
		return true;
	else
		return false;
}


bool AddParticipantToClassroom(CLASSROOM* c, PARTICIPANT p)
{
	if (c->currentNumber >= MAXPARTICIPANTS)
	{
		return false;
	}
	else
	{
		c->ps[c->currentNumber++] = p;
		return true;
	}

}

PARTICIPANT GetParticipantFromClassroom(CLASSROOM c)
{

}

bool SaveClassroomToDisk(CLASSROOM c, char* filename)
{
	FILE* fp;
	if((fp = fopen(filename, "w")) == NULL)
		return false;
	
	fprintf(fp, "%s\n", c.name);				// write class name to disk
	fprintf(fp, "%d\n", c.currentNumber);		// write number of participants - useful for loop
	for (int i = 0; i < c.currentNumber; i++)	// loop through all participants ans save...
	{
		saveParticipantToStream(c.ps[i], fp);
	}
	fclose(fp);
}

CLASSROOM LoadClassroomFromDisk(char* filename)
{

}