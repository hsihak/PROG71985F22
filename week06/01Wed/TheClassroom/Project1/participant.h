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
	ATTENDEE atendee;
} PARTICIPANT;

PARTICIPANT CreateParticpantFromStudent(STUDENT);
PARTICIPANT CreateParticpantFromProfessor(PROFESSOR);

void PrintParticpant(PARTICIPANT);