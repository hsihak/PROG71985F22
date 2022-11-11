#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// $(ProjectDir) ==> the directory where the project files are (*.vcproj)
// $(SolutionDir) ==> the directory where the .sln file is located
// $(TargetDir) ==> the firectory where the .exe file will be located

int main(int argc, char* argv[])
{
	if (argc != 3)
		exit();

	FILE* fp;
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "this failed\n");
		exit();
	}
	else
		fclose(fp);
}