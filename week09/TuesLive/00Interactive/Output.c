#include "Output.h"
#include <stdio.h>

// some comments.  properly done.  with your own name


void PrintOutput(int starting)
{
    for(int i=starting; i<starting+NUMBER; i++)
        printf("%d\n", i);
}