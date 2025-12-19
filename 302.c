#include<stdio.h>
#include<string.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
    float fMarks;
    char cGrade;
};

Student Accept()
{
    Student S;

    S.iRollNo = 1;
    strcpy(S.cName,"S1");
    S.fMarks = 98.99;
    S.iAge = 22;
    S.cGrade = 'A';

    return S;
    
}

void Display(Student S)
{
    printf("%d\n",S.iRollNo);
    printf("%s\n",S.cName);
    printf("%d\n",S.iAge);
    printf("%c\n",S.cGrade);
    printf("%f\n",S.fMarks);
}
int main()
{

    Student S1;

    S1 = Accept();

    Display(S1);


    return 0;
}