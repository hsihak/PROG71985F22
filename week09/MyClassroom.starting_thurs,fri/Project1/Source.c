#include "student.h"
#include "professor.h"
#include "participant.h"

#include <stdio.h>
#include <stdbool.h>

// classroom
// thursday - prog71985
//steveh


int main(void)
{
	// -- testing student
	STUDENT bobby = CreateStudent("bobby", 12345678);

	printf("DIRECT: %s\n", GetName(bobby)); // float PromptAndGetNumber()

	char buffer[MAXLEN];
	if (GetNameFromStudentWithReturn(bobby, &buffer))
		printf("buffer: %s\n", buffer);

	PrintStudent(bobby);

	PARTICIPANT p0 = CreateParticipantFromStudent(bobby);
	PrintParticipant(p0);

	// -- testing professor
	PROFESSOR steve = CreateProfessor("steve he", "ACSIT");
	if (GetNameFromProfessorWithReturn(steve, &buffer))
		printf("buffer: %s\n", buffer);

	PrintProfessor(steve);

	PARTICIPANT p1 = CreateParticipantFromProfessor(steve);
	PrintParticipant(p1);

	return 0;
}