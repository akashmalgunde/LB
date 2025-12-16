#include<stdio.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char cName[20];
    float fMarks;
};

int main()
{

    Student Sarr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter the data of %dth student:\n",i+1);
        scanf("%d",&Sarr[i].iRollNo);
        scanf("%s",Sarr[i].cName);
        scanf("%f",&Sarr[i].fMarks);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Data of %dth student is:\n",i+1);
        printf("%d\n",Sarr[i].iRollNo);
        printf("%s\n",Sarr[i].cName);
        printf("%f\n",Sarr[i].fMarks);
    }

    return 0;
}