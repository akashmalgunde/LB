#include<stdio.h>

void mystrcpy(char *Dest,char *Src)
{
    int i = 0;

    while(Src[i] != '\0')
    {
        Dest[i] = Src[i];
        i++;
    }
    Dest[i] = '\0';
}
typedef struct Date
{
    int iDay;
    int iMonth;
    int iYear;
}Date;

typedef struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
    float fMarks;
    Date DOB;
    Date DOA;
    Date Exam[5];
}Student;

void Accept(Student *S)
{
    S->iRollNo = 1;
    mystrcpy(S->cName,"S1");
    
}

int main()
{

    char Str[10] = {};

    mystrcpy(Str,"S15165163");

    printf("%s\n",Str);

    Student S1;

    Accept(&S1);


    return 0;
}