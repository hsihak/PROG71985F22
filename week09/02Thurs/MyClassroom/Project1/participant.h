#pragma once
#include "student.h"
#include "professor.h"


typedef union attendee {
	PROFESSOR professor;
	STUDENT student;
}ATTENDEE;

typedef enum ptype { STUD, PROF, GUEST } TYPE;

typedef struct participant {
	TYPE type;
	ATTENDEE attendee;
} PARTICIPANT;

PARTICIPANT CreateParticipantFromStudent(STUDENT);
PARTICIPANT CreateParticipantFromProfessor(PROFESSOR);

void PrintParticipant(PARTICIPANT);