#include<stdio.h>
#include<string.h>


typedef struct student
{
    int iRollNo;
    char cName[50];
    float fMarks;

}Student;

int main()
{
    Student S1;

    S1.iRollNo = 1;
    strcpy(S1.cName,"S1");
    S1.fMarks = 98.20;

    printf("%d\n",S1.iRollNo);
    printf("%s\n",S1.cName);
    printf("%f\n",S1.fMarks);



    return 0;
}