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
	char name[MAXSIZE];
	LIST participantList;
} CLASSROOM;

CLASSROOM CreateClassroom(char*);
void DisposeClassroom(CLASSROOM);

int GetClassroomCapacity(CLASSROOM);
bool IsClassroomFull(CLASSROOM);

int GetCurrentCountOfParticipants(CLASSROOM);

bool AddParticipantToClassroom(CLASSROOM*, PARTICIPANT);

void PrintClassroom(CLASSROOM);

bool SaveClassroomToDisk(CLASSROOM, char*);
bool LoadClassroomFromDisk(CLASSROOM*, char*);

PARTICIPANT* SearchForParticipantInClassroom(CLASSROOM, PARTICIPANT);
PARTICIPANT* RecursiveSearchForParticipantInClassroom(CLASSROOM, PARTICIPANT);