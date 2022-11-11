#define _CRT_SECURE_NO_WARNINGS
#include "classroom.h"
#include "ListADT.h"
#include <stdio.h>
#include <string.h>

// some words about implementation of classroom
// steveh - week9 - prog71985 - fall22

CLASSROOM CreateClassroom(char* name)
{
	CLASSROOM c;
	c.participantList = CreateList();
	//c.currentNumber = 0;
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

int GetCurrentCapacity(CLASSROOM c)
{
	return GetCurrentCount(c.participantList);
}

bool AddParticipantToClassroom(CLASSROOM* c, PARTICIPANT p)
{
	if (c->currentNumber >= MAXPARTICIPANTS)
	{
		return false;
	}
	else
		return AddParticipantToClassroom(c, p);
}

// PARTICIPANT GetParticipantFromClassroom(CLASSROOM c)
// {
// }

void PrintClassroom(CLASSROOM c)
{
	printf("Class name: %s\n", c.name);
	printf("Class capacity: %d\n", MAXPARTICIPANTS);
	printf("Class current enrollment: %d\n", c.currentNumber);
	printf("Enrolled participants:\n");
	for (int i = 0; i < c.currentNumber; i++)
		PrintParticipant(c.ps[i]);
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
		SaveParticipantToStream(c.ps[i], fp);
	}
	fclose(fp);
	return true;
}

bool LoadClassroomFromDisk(CLASSROOM* c, char* filename)
{
	FILE* fp;
	if ((fp = fopen(filename, "r")) == NULL)
		return false;

	char fileBuffer[LONGESTLINE];
	fgets(fileBuffer, LONGESTLINE, fp);
	strncpy(c->name, fileBuffer, MAXSIZE);		//copy read-in class name into classroom struct.

	c->currentNumber = 0;	// if we don't initialize this number, we will have issues later.

	int participantCount;   // read from file
	if ((fscanf(fp, "%d\n", &participantCount)) != 1)    // this becomes out loop counter max
	{
		fclose(fp);
		return false;			// something bad is happening - return with fail code
	}

	for (int i = 0; i < participantCount; i++)
	{
		PARTICIPANT p;
		if (ReadParticipantFromStream(&p, fp))
			AddParticipantToClassroom(c, p);
		else
			return false;
	}

	fclose(fp);
	return true;
}