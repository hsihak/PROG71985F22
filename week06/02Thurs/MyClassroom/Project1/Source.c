#include "student.h"
#include <stdio.h>
#include <stdbool.h>

// classroom
// thursday - prog71985
//steveh


int main(void)
{
	STUDENT bobby = CreateStudent("bobby", 12345678);

	printf("DIRECT: %s\n", GetName(bobby)); // float PromptAndGetNumber()

	char buffer[MAXLEN];
	bool isValid = GetNameWithReturnValue(bobby, &buffer);

	PrintStudent(bobby);

	return 0;
}