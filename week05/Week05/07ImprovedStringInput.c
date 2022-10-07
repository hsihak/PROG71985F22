// string input - week05 example 6
//
//
// PROG71985 - F22
// Professor SteveH - Sept 2022
//
// revision history
//		1.0		2020-Jun-28			initial	
//      1.1       2021-June-1           reviewed and updated
//      1.2     2022-May-20         reviewed

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define STRLEN                80
#define SHORT_STRLEN          5

int main(void)
{
    char sentence[SHORT_STRLEN];  
    puts("Enter a string, please:");  // i will type "steve was here"

    //choose 1 of these:
    int i = scanf("%s", sentence);  
    //int i = scanf_s("%s", sentence, SHORT_STRLEN);

    printf("we read %i and your string is:\n", i);
    printf("%s\n", sentence);
    puts("Done.\n");

    // on my vs2022 system, *neither* of these does what i want (or expect)
    //  the biggest difference between the 2 *incorrect* outcomes is that scanf causes corruption, _s does not

    // ** after we exhaust our step 2 demonstration, try: fflush(stdin);  
    char words[STRLEN];
    puts("Enter another string, please:");

//step 2
    gets(words);                                //the wrong way (buffer overflow)
    //fgets(words, STRLEN, stdin);              //the right way - truncating overflowing input

    printf("Your string:\n");
    printf("%s\n", words);
    puts("Done.");

    return 0;
}
