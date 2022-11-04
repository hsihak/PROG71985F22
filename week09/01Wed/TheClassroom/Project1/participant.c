#include "participant.h"
#include <stdio.h>

// participant  implementation
// prog71985 fall 2022 - end of week 9 - combined effort of all participants


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
		printProfessor(p.attendee.professor);
	else if (p.type == STUD)
		printStudent(p.attendee.student);
	else
		fprintf(stderr, "error - invalid participant type selected\n");
}

void saveParticipantToStream(PARTICIPANT p, FILE* fp)
{
	if (p.type == PROF)
	{
		fprintf(fp, "PROF\n");
		saveProfessorToStream(p.attendee.professor, fp);
	}
	else if (p.type == STUD)
	{
		fprintf(fp, "STUD\n");
		saveStudentToStream(p.attendee.student, fp);
	}
	else
		fprintf(stderr, "error - invalid participant type selected\n");
}
