#include "participant.h"

// participant  implementation


PARTICIPANT CreateParticpantFromStudent(STUDENT s)
{

}
PARTICIPANT CreateParticpantFromProfessor(PROFESSOR p)
{
	PARTICIPANT participant;
	participant.type = PROF;

	return participant;
}

void PrintParticpant(PARTICIPANT p)
{
	if (p.type == PROF)
		printProfessor(p.atendee.professor);
	else if (p.type == STUD)
		printStudent(p.atendee.student);
	else
		printf("error - invalid participant type selected\n");
}