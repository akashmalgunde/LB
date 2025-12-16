#include<stdio.h>

struct Student
{
    int iRollNo;
    char cName[20];
    int iAge;
    float fMarks;
};

int main()
{

    struct Student Sarr[5] = {{1,"S1",22,98.90},{2,"S2",22,97.90}};


    printf("%d\n",Sarr[2].iRollNo);
    printf("%s\n",Sarr[2].cName);
    printf("%d\n",Sarr[2].iAge);
    printf("%f\n",Sarr[2].fMarks);


    return 0;
}