#include "student.h"
#include "professor.h"
#include "participant.h"
#include "classroom.h"

#include <stdio.h>
#include <stdbool.h>

// the classroom
// prog71985 fall2022 steveh
// in week06

int main()
{
	// test/exercise student ADT
	STUDENT bobby = CreateStudent("bobby jones", 12345678);
	printf("NAME: %s\n", GetNameFromStudent(bobby));
	char buffer[MAXSIZE];
	bool validName = GetNameFromStudentWithReturn(bobby, &buffer);
	printf("BUFFER: %s\n", buffer);
	printStudent(bobby);
	PARTICIPANT p0 = CreateParticipantFromStudent(bobby);
	PrintParticipant(p0);
	
	// test/exercise professor ADT
	PROFESSOR steve = CreateProfessor("steve he", "acsit");
	printf("NAME: %s\n", GetNameFromProfessor(steve));
	validName = GetNameFromProfessorWithReturn(steve, &buffer);
	printf("BUFFER: %s\n", buffer);
	printProfessor(steve);
	PARTICIPANT p1 = CreateParticipantFromProfessor(steve);
	PrintParticipant(p1);

	// test/exercise classroom ADT
	CLASSROOM c0 = CreateClassroom("prog71985");

	if (IsClassroomFull(c0))
		printf("full\n");

	if(!AddParticipantToClassroom(&c0, p1))
		printf("no room for participant\n");

	if (!AddParticipantToClassroom(&c0, p0))
		printf("no room for participant\n");

	SaveClassroomToDisk(c0, "file.dat");
	return 0;
}