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
	printf("NAME: %s\n", GetNameFromStudent(bobby));
	char buffer[MAXSIZE];
	if(GetNameFromStudentWithReturn(bobby, buffer))
		printf("BUFFER: %s\n", buffer);

	PrintStudent(bobby);
	PARTICIPANT p0 = CreateParticipantFromStudent(bobby);
	PrintParticipant(p0);
	
	// test/exercise professor ADT
	PROFESSOR steve = CreateProfessor("steve he", "acsit");
	printf("NAME: %s\n", GetNameFromProfessor(steve));
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




	CLASSROOM readFromFileClassroom;
	if (!LoadClassroomFromDisk(&readFromFileClassroom, "file.dat"))
	{
		fprintf(stderr, "Error reading classroom from file\n");
		exit(1);
	}

	PrintClassroom(readFromFileClassroom);

	return 0;
}


// valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./Classroom
// ==1588618== Memcheck, a memory error detector
// ==1588618== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==1588618== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
// ==1588618== Command: ./Classroom
// ==1588618== 
// NAME: (null)
// BUFFER: bobby jones
// STUDENT: bobby jones, 12345678
// STUDENT: bobby jones, 12345678
// NAME: (null)
// BUFFER: steve he
// PROFESSOR: steve he, acsit
// PROFESSOR: steve he, acsit
// Class name: prog71985

// Class capacity: 35
// Class current enrollment: 2
// Enrolled participants:
// PROFESSOR: steve he, acsit
// STUDENT: bobby jones, 12345678
// ==1588618== 
// ==1588618== FILE DESCRIPTORS: 3 open at exit.
// ==1588618== Open file descriptor 2: /dev/pts/0
// ==1588618==    <inherited from parent>
// ==1588618== 
// ==1588618== Open file descriptor 1: /dev/pts/0
// ==1588618==    <inherited from parent>
// ==1588618== 
// ==1588618== Open file descriptor 0: /dev/pts/0
// ==1588618==    <inherited from parent>
// ==1588618== 
// ==1588618== 
// ==1588618== HEAP SUMMARY:
// ==1588618==     in use at exit: 0 bytes in 0 blocks
// ==1588618==   total heap usage: 5 allocs, 5 frees, 10,160 bytes allocated
// ==1588618== 
// ==1588618== All heap blocks were freed -- no leaks are possible
// ==1588618== 
// ==1588618== For lists of detected and suppressed errors, rerun with: -s
// ==1588618== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)