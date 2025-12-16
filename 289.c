#include<stdio.h>

struct Student
{
    int iRollNo;
    char cName[25];
    int iAge;
    float fMarks;
};

int main()
{

    struct Student S1 = {1,"S1",22,98};

    

    printf("%d\n",S1.iRollNo);
    printf("%s\n",S1.cName);
    printf("%d\n",S1.iAge);
    printf("%f\n",S1.fMarks);



    return 0;
}