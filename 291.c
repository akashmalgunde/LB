#include<stdio.h>

typedef struct Student
{
    int iRollNo;
    char cName[20];
    int iAge;
    float fMarks;
}Student;

int main()
{

    Student Sarr[5];

    for(int i = 0; i < 2; i++)
    {
        printf("Enter the data of %dth student:\n",i+1);
        scanf("%d",&Sarr[i].iRollNo);
        scanf("%s",Sarr[i].cName);
        scanf("%d",&Sarr[i].iAge);
        scanf("%f",&Sarr[i].fMarks);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Entered data of the %dth student:\n",i+1);
        printf("%d\n",Sarr[i].iRollNo);
        printf("%s\n",Sarr[i].cName);
        printf("%d\n",Sarr[i].iAge);
        printf("%f\n",Sarr[i].fMarks);
    }
    return 0;
}