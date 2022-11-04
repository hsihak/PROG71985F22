#include "Input.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// prog71985 - steveh - fall 2022
// implementation for common user input routines

int CountOfLetterInString(char* string, char c)
{
    int count=0;
    for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == c)
			count++;
	}
    return count;
}

void ß(char* string)
{
    for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == '\n')
			string[i] = '\0';
	}
}

bool stringIsNumeric(char* string)
{
    for (int i = 0; i < strlen(string); i++)
	{
		if (!(isdigit(string[i]) || string[i] == '.' || string[i] == '+' || string[i] == '-' ))
            return false;
	}
    // make sure 1) only 1 period, 2) + or - sign only at location 0
    int countOfPlus = CountOfLetterInString(string, '+');
    int countOfMinus = CountOfLetterInString(string, '-');
    if(CountOfLetterInString(string, '.') <=1 && countOfPlus <=1 && countOfMinus<= 1)
    {
        if(countOfPlus == 1 && countOfMinus == 0 && string[0] == '+')
            return true;
        else if (countOfMinus == 1 && countOfPlus == 0 && string[0] == '-')
            return true;
        else if (countOfMinus == 0 && countOfPlus == 0)
            return true;
        else
            return false;
    }
    else
        return false;
}

bool PromptAndGetStringInput(char* prompt, char* response, size_t max)
{
    printf("%s", prompt);
    fgets(response, (int)max, stdin);

    //optional
    CleanNewLineFromString(response);

    if(strlen(response) >0)
        return true;
    else
        return false;
}

#define MAXSTRINGTOFLOAT    20

float PromptAndReturnNumberInput(char* prompt)
{
    printf("%s", prompt);

    char input[MAXSTRINGTOFLOAT];
    fgets(input, (int)MAXSTRINGTOFLOAT, stdin);
    return (float)atof(input);
}

bool PromptAndGetNumberInput(char* prompt, float* response)
{
    printf("%s", prompt);

    char input[MAXSTRINGTOFLOAT];
    fgets(input, (int)MAXSTRINGTOFLOAT, stdin);
    CleanNewLineFromString(input);

    if(!StringIsNumeric(input))
        return false;
    else
    {
        *response = (float)atof(input);
        return true;
    }
}