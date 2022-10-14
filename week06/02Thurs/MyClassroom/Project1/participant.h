#pragma once
#include "student.h"
#include "professor.h"


typedef union attendee {
	PROFESSOR p;
	STUDENT s;
}ATTENDEE;

typedef enum ptype { STUD, PROF, GUEST } TYPE;

typedef struct participant {
	TYPE type;
	ATTENDEE Attendee;
} PARTICIPANT;