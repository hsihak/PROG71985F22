#include "student.h"
#include "professor.h"
#include "participant.h"
#include "classroom.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// the classroom
// prog71985 fall2022 steveh
// in week06
// see end of file for results of memory leak testing

int main()
{
	// test/exercise student ADT
	STUDENT bobby = CreateStudent("bobby jones", 12345678);
	//printf("NAME: %s\n", GetNameFromStudent(bobby));			this is dangerous, so we removed it.
	char buffer[MAXSIZE];
	if(GetNameFromStudentWithReturn(bobby, buffer))
		printf("BUFFER: %s\n", buffer);

	PrintStudent(bobby);
	PARTICIPANT p0 = CreateParticipantFromStudent(bobby);
	PrintParticipant(p0);
	
	// test/exercise professor ADT
	PROFESSOR steve = CreateProfessor("steve he", "acsit");
	//printf("NAME: %s\n", GetNameFromProfessor(steve));  this is dangerous, so we removed it.
	if(GetNameFromProfessorWithReturn(steve, buffer))
		printf("BUFFER: %s\n", buffer);
	PrintProfessor(steve);
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

	if (!SaveClassroomToDisk(c0, "file.dat"))
		fprintf(stderr, "Error saving classroom to file\n");


	int count = GetCurrentCountOfParticipants(c0);
	printf("Current classroom count: %d\n", count);

	PARTICIPANT* foundParticipant0 = RecursiveSearchForParticipantInClassroom(c0, CreateParticipantFromProfessor(CreateProfessor("steve he", "acsit")));
	if (foundParticipant0 == NULL)
		printf("that person is not in class\n");

	PARTICIPANT* foundParticipant = SearchForParticipantInClassroom(c0, CreateParticipantFromProfessor(CreateProfessor("steve he", "acsit")));
	if (foundParticipant == NULL)
		printf("that person is not in class\n");


	CLASSROOM readFromFileClassroom;
	if (!LoadClassroomFromDisk(&readFromFileClassroom, "file.dat"))
	{
		fprintf(stderr, "Error reading classroom from file\n");
		exit(1);
	}

	PrintClassroom(readFromFileClassroom);

	DisposeClassroom(readFromFileClassroom);
	DisposeClassroom(c0);

	return 0;
}


// valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./Classroom
// ==3096738== Memcheck, a memory error detector
// ==3096738== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==3096738== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
// ==3096738== Command: ./Classroom
// ==3096738== 
// BUFFER: bobby jones
// STUDENT: bobby jones, 12345678
// STUDENT: bobby jones, 12345678
// BUFFER: steve he
// PROFESSOR: steve he, acsit
// PROFESSOR: steve he, acsit
// Current classroom count: 2
// Class name: prog71985

// Class capacity: 35
// Class current enrollment: 2
// Enrolled participants:
// PROFESSOR: steve he, acsit
// STUDENT: bobby jones, 12345678
// ==3096738== 
// ==3096738== FILE DESCRIPTORS: 5 open (3 std) at exit.
// ==3096738== Open file descriptor 21: /source/repos/.local/share/code-server/logs/20221029T141908/remoteagent.log
// ==3096738==    <inherited from parent>
// ==3096738== 
// ==3096738== Open file descriptor 19: /source/repos/.local/share/code-server/logs/20221029T141908/ptyhost.log
// ==3096738==    <inherited from parent>
// ==3096738== 
// ==3096738== 
// ==3096738== HEAP SUMMARY:
// ==3096738==     in use at exit: 0 bytes in 0 blocks
// ==3096738==   total heap usage: 9 allocs, 9 frees, 10,416 bytes allocated
// ==3096738== 
// ==3096738== All heap blocks were freed -- no leaks are possible
// ==3096738== 
// ==3096738== For lists of detected and suppressed errors, rerun with: -s
// ==3096738== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)