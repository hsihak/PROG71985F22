#include "student.h"
#include "Error.h"
#include "ListADT.h"

int main(void)
{
	STUDENT s = CreateStudent("BOBBY", 12345);
	PrintStudent(s);

	LIST myList = CreateList();

	if (!AddItemToList(&myList, s))
	{
		fprintf(stderr, "failed to add student to list\n");
	}

	Display(myList);
	RemoveItemFromList(&myList, CreateStudent("sally", 54321));
	Display(myList);

	DisposeList(&myList);


	return 0;
}
