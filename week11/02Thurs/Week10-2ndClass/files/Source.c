#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//  files.exe input.txt output.txt

// $(ProjectDir) ==> the directory where the project files are (*.vcproj)
// $(SolutionDir) ==> the directory where the .sln file is located
// $(TargetDir) ==> the firectory where the .exe file will be located

int main(int argc, char* argv[])
{
	FILE* fp;

	if (argc != 3)
		exit();

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "problem with file opnening");
	}
	else
		fclose(fp);
}