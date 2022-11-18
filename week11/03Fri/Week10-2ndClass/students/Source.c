#include "student.h"
#include "ListADT.h"
#include <stdio.h>

// exploring composition 
int main(void)
{
	STUDENT s = CreateStudent("bobby", 12345);
	PrintStudent(s);

	LIST myList = CreateList();

	if (!AddItemToList(&myList, s))  //makes a copy of student
	{
		fprintf(stderr, "failed to add item to list\n");
	}

	//dispose of original student.

	Display(myList);
	RemoveStudentFromList(&myList, CreateStudent("sally", 54321));
	Display(myList);

	DisposeList(&myList);

}