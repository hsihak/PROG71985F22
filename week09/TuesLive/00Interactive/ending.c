#include "Input.h"
#include "Output.h"
#include <stdio.h>
#include <stdlib.h>



// Question 1: Print a range of numbers
// o Specifications: 4.0/4.0 (The program works and meets all of the specifications.)
// o Readability: 3.0/4.0 (The code is fairly easy to read or the following issues were noted:)
//  —All variables must have descriptive names
// o Reusability: 3.0/4.0 (Most of the code could be reused in other programs or the following issues were noted:)
//  —Having hard coded (magic) values in function limits reusability
// o Documentation: 3.0/4.0 (The documentation consists of embedded comment and some simple header documentation that is somewhat useful in understanding the code. or the following issues were noted:)
//  —Incomplete top-of-file comment block (missing name, class, assignment#, etc)

// prog71985 - steve - fall 2022 - asn 2 refactor q 1



int main(void)
{
    //input 
    float userInput;
    if(!PromptAndGetNumberInput("Enter a number: ", &userInput))
        exit(1);

    //output
    PrintOutput(userInput);
}