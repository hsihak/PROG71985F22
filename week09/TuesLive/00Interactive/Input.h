#pragma once
#include <stdbool.h>
#include <stdio.h>

// prog71985 - steveh - fall 2022
// interface for common user input routines

int CountOfLetterInString(char* string, char c);

void CleanNewLineFromString(char* string);

//bool StringIsNumeric(char* string);

bool PromptAndGetStringInput(char* prompt, char* response, size_t max);

float PromptAndReturnNumberInput(char* prompt);

bool PromptAndGetNumberInput(char* prompt, float* response);
