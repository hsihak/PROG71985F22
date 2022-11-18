#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// some playing with files and command line

// $(ProjectDir) ==> the directory where the project files are (*.vcproj)
// $(SolutionDir) ==> the directory where the .sln file is located
// $(TargetDir) ==> the firectory where the .exe file will be located


int main(int argc, char** argv)
{
	FILE* fp;
	if (argc != 2)
		exit();

	if ((fp = fopen(argv[1], "r")) == NULL)
		printf(stderr, "cant open file");
	else
		fclose(fp);
}