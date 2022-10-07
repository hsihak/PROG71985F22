#include "student.h"

// student impl.
// steveh prog71985 fall2022 week05

STUDENT CreateStudent(char name[MAXSIZE], int StudentNum)
{
	STUDENT s;
	// this is where we left off
	s.studentnum = StudentNum;
	return s;

}


void printStudent(STUDENT student)
{
	printf("STUDENT: %s, %d\n", student.name, student.studentnum);
}
