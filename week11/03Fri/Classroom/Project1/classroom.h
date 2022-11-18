#pragma once
#include "participant.h"
#include "ListADT.h"
#include <stdbool.h>

// some words about interface of classroom
// steveh - week9 - prog71985 - fall22

#define MAXSIZE				25
#define MAXPARTICIPANTS		35
#define LONGESTLINE			100

typedef struct classroom
{
	//int currentNumber;
	char name[MAXSIZE];
	LIST participantList;
} CLASSROOM;

CLASSROOM CreateClassroom(char*);

int GetClassroomCapacity(CLASSROOM);
int GetClassroomCurrentCount(CLASSROOM);
bool IsClassroomFull(CLASSROOM);

bool AddParticipantToClassroom(CLASSROOM*, PARTICIPANT);
//PARTICIPANT GetParticipantFromClassroom(CLASSROOM);

void PrintClassroom(CLASSROOM);

bool SaveClassroomToDisk(CLASSROOM, char*);
bool LoadClassroomFromDisk(CLASSROOM*, char*);


