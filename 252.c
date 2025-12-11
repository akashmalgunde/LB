#include<stdio.h>
#include<string.h>

struct Student
{
    int iRollNo;
    char cName[25];
    int iAge;
};

int main()
{
    struct Student S1;

    S1.iRollNo = 1;
    strcpy(S1.cName,"RAM");
    S1.iAge = 25;

    printf("%d\n",S1.iRollNo);
    printf("%d\n",S1.iAge);
    printf("%s",S1.cName);

    return 0;
}