#include "Error.h"

#include <stdio.h>
#include <stdlib.h>

// this is a simple error handling/reporting library
// designed to simply source code listings with error-handling
// prog71985 - fall2022 - week10 - contributed by prof steve

void ErrorExit(char* msg)
{
    fprintf(stderr, "FATAL ERROR: %s\n", msg);
    exit(EXIT_FAILURE);
}

void ErrorContinue(char* msg)
{
        fprintf(stderr, "non-fatal error: %s, continuing\n", msg);
}
