
adt = abstract datatype 
        -> composed data type
        -> use structures
        -> model something in real life
        -> simplify as much as possible, but no more

student -> name, studID

typedef struct student {
    char name[60];
    int studentNum;
} STUDENT;


STUDENT CreateStudent(char* name, int studentNum);

STUDENT classroom[100]

typedef struct professor {
    char name[];
    char dept[];
} PROFESSOR;

size_t s = sizeof(PROFESSOR) * ARRAYSIZE;

typedef struct guest {
    char name[];
} GUEST;

typedef enum type { student, professor, guest } TYPE;

struct participant {
    TYPE type;          // 4 bytes
    union {
        STUDENT s;       //100 bytes
        PROFESSOR p;     // 120 bytes
        GUEST g;         // 60 bytes
    }
}

struct classroom {

}



while(true)
{

    if(exit condition has happened)
        break;

    //do this also  
}

while(!exitcondition)
{
    // do this also

    if(exit conditionhappens)
        exitcondition = true;

    
}

float numA, numB;

while(1)
{
    if (input1 is good && input2 is good)
    {
        printf("sum is: %d\n", numA + numB;)
    }
    else
        break;
}
