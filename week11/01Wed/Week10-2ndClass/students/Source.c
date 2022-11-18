#include "student.h"
#include "Error.h"
#include "ListADT.h"

int main(void)
{
	STUDENT s = CreateStudent("bobby", 12345);
	PrintStudent(s);

	LIST studentlist = CreateList();
	if (!AddItemToList(&studentlist, s))
		ErrorExit("something went wrong");

	Display(studentlist);
}