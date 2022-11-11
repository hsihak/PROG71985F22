#include "StringUtils.h"

#include <string.h>

// implementation for string utilities.
// in this specific case, I borrowed the 'CleanNewLinesFromString' function directly
// from Input.[hc].  If I need all the functionality of Input.[hc], I could have just 
// included it all.
// prog71985 - fall2022 - week10 starting - steve h

void CleanNewLineFromString(char* string)
{
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == '\n')
			string[i] = '\0';
	}
}