#include<stdio.h>
#include<string.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char Str[50];
    int iAge;
    float fMarks;
};

void Accept(Student *S)
{
    S->iRollNo = 1;
    //strcpy(S->Str,"S1");
    S->Str = "S1";
    S->iAge = 22;
    S->fMarks = 98.99;
}

void Display(Student *S)
{
    printf("%d\n",S->iRollNo);
    printf("%s\n",S->Str);
    printf("%d\n",S->iAge);
    printf("%f\n",S->fMarks);
}
int main()
{

    Student S1;

    Student S2;

    Accept(&S1);
    Display(&S1);

    Accept(&S2);
    Display(&S2);

    return 0;
}