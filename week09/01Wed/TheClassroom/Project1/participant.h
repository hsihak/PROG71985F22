#pragma once
#include "student.h"
#include "professor.h"

// participant interface
// steve prog71985 - week06

typedef enum ptype { STUD, PROF } TYPE;

typedef union attendee {
	STUDENT student;
	PROFESSOR professor;
} ATTENDEE;

typedef struct participant {
	TYPE type;
	ATTENDEE attendee;
} PARTICIPANT;

PARTICIPANT CreateParticipantFromStudent(STUDENT);
PARTICIPANT CreateParticipantFromProfessor(PROFESSOR);

void PrintParticipant(PARTICIPANT);
void saveParticipantToStream(PARTICIPANT, FILE*);