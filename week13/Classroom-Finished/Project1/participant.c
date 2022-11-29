#include "participant.h"
#include <stdio.h>
#include <string.h>

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
		PrintProfessor(p.attendee.professor);
	else if (p.type == STUD)
		PrintStudent(p.attendee.student);
	else
		fprintf(stderr, "error - invalid participant type selected\n");
}

void SaveParticipantToStream(PARTICIPANT p, FILE* fp)
{
	if (p.type == PROF)
	{
		fprintf(fp, "PROF\n");
		SaveProfessorToStream(p.attendee.professor, fp);
	}
	else if (p.type == STUD)
	{
		fprintf(fp, "STUD\n");
		SaveStudentToStream(p.attendee.student, fp);
	}
	else
		fprintf(stderr, "error - invalid participant type selected\n");
}

void CopyStudentIntoParticipant(PARTICIPANT* p, STUDENT s)
{
	p->type = STUD;
	strncpy(p->attendee.student.name, s.name, MAXSIZE);
	p->attendee.student.studentnum = s.studentnum;
}

void CopyProfessorIntoParticipant(PARTICIPANT* p, PROFESSOR prof)
{
	p->type = PROF;
	strncpy(p->attendee.professor.name, prof.name, MAXSIZE);
	strncpy(p->attendee.professor.dept, prof.dept, MAXSIZE);
}

bool ReadParticipantFromStream(PARTICIPANT* p, FILE* fp)
{
	char fileBuffer[LONGESTLINE];

	fgets(fileBuffer, LONGESTLINE, fp);		// read next line from file
	if (!strncmp(fileBuffer, "STUD", 4))		// is the next participant a student?  *Note: the 4
	{											//     here is not considered a magic number, because of
		STUDENT s = ReadStudentFromStream(fp);	//     implied context.
		CopyStudentIntoParticipant(p, s);	// a later improvement to better handle errors! 
	}
	else if (!strncmp(fileBuffer, "PROF", 4))	// else is the next participant a prof.  
	{
		PROFESSOR prof = ReadProfessorFromStream(fp);
		CopyProfessorIntoParticipant(p, prof); // a later improvement to better handle errors!
	}
	else
	{
		fprintf(stderr, "Participant type not supported\n");
		return false;
	}
	return true;
}

bool CompareParticipant(PARTICIPANT lhs, PARTICIPANT rhs)
{
	if (lhs.type == rhs.type && lhs.type == STUD)
		return CompareStudent(lhs.attendee.student, rhs.attendee.student);
	else if (lhs.type == rhs.type && lhs.type == PROF)
		return CompareProfessor(lhs.attendee.professor, rhs.attendee.professor);
	else
		return false;
}

PARTICIPANT CopyParticipantNoSafety(PARTICIPANT src)	// this gives us: warning C4715: 'CopyParticipantNoSafety': not all control paths return a value
{
	if (src.type == STUD)
	{
		STUDENT s;
		s = CopyStudent(src.attendee.student);
		return CreateParticipantFromStudent(s);
	}

	if (src.type == PROF)
	{
		PROFESSOR p;
		p = CopyProfessor(src.attendee.professor);
		return CreateParticipantFromProfessor(p);
	}
}

bool CopyParticipant(PARTICIPANT* dest, const PARTICIPANT src)
{
	if (src.type == STUD)
	{
		STUDENT s;
		s = CopyStudent(src.attendee.student);
		*dest = CreateParticipantFromStudent(s);
		return true;
	}

	if (src.type == PROF)
	{
		PROFESSOR p;
		p = CopyProfessor(src.attendee.professor);
		*dest =  CreateParticipantFromProfessor(p);
		return true;
	}

	return false;
}

void DisposeParticipant(PARTICIPANT src)
{
	if (src.type == STUD)
		DisposeStudent(src.attendee.student);
	else if (src.type == PROF)
		DisposeProfessor(src.attendee.professor);
	else
		;
}