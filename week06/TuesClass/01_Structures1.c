//* book.c -- one-book inventory */

// PROG71985 F22 - Professor SteveH - Jun 2022
//
// borrowed from textbook

#include <stdio.h>
#include <string.h>

#define MAXTITLE  41      /* maximum length of title + 1         */
#define MAXAUTHOR  31      /* maximum length of author's name + 1 */

struct book {            /* structure template: tag is book     */
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float cost;
};                       /* end of structure template           */

int main(void)
{
    struct book myBook; 

    printf("Please enter the book title (single word): ");
    scanf("%s", myBook.title);
    //scanf_s("%s", myBook.title, MAXTITLE); 
    printf("Now enter the author (single word): ");
    scanf("%s", myBook.author);
    //scanf_s("%s", myBook.author, MAXAUTHOR);
    printf("Now enter the cost:");
    scanf("%f", &myBook.cost);
    //scanf_s("%f", &myBook.cost);

    printf("\n%s by %s: $%.2f\n", myBook.title, myBook.author, myBook.cost);
    printf("%s: \"%s\" ($%.2f)\n", myBook.author, myBook.title, myBook.cost);

    printf("Done.\n");

    return 0;
}
