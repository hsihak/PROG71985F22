#pragma once

#pragma once
#include "participant.h"
#include <stdbool.h>

// some words about interface of classroom
// steveh - week9 - prog71985 - fall22

#define MAXSIZE				25
#define MAXPARTICIPANTS		35

typedef struct classroom
{
	int currentNumber;
	char name[MAXSIZE];
	PARTICIPANT ps[MAXPARTICIPANTS];
} CLASSROOM;

CLASSROOM CreateClassroom(char*);

int GetClassroomCapacity(CLASSROOM);
bool IsClassroomFull(CLASSROOM);

bool AddParticipantToClassroom(CLASSROOM*, PARTICIPANT);
PARTICIPANT GetParticipantFromClassroom(CLASSROOM);

bool SaveClassroomToDisk(CLASSROOM, char*);
bool LoadClassroomFromDisk(CLASSROOM*, char*);
