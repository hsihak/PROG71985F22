#include "participant.h"
#include <stdio.h>

// participant  implementation
// prog71985 fall 2022 - start of week 9 - combined effort of all participants


PARTICIPANT CreateParticipantFromStudent(STUDENT s)
{
	PARTICIPANT participant;
	participant.type = STUD;
	participant.attendee.student = s;
	return participant;
}

PARTICIPANT CreateParticipantFromProfessor(PROFESSOR p)
{
	PARTICIPANT participant;
	participant.type = PROF;
	participant.attendee.professor = p;
	return participant;
}

void PrintParticipant(PARTICIPANT p)
{
	if (p.type == PROF)
		PrintProfessor(p.attendee.professor);
	else if (p.type == STUD)
		PrintStudent(p.attendee.student);
	else
		fprintf(stderr, "failure to understand type\n");
}
