#include<stdio.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
    float fMarks;
};

int main()
{

    Student July[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter the data of July Student %d:\n",i+1);
        scanf("%d",&July[i].iRollNo);
        scanf("%s",July[i].cName);
        scanf("%d",&July[i].iAge);
        scanf("%f",&July[i].fMarks);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Entered data of July Student %d:\n",i+1);
        printf("%d\n",July[i].iRollNo);
        printf("%s\n",July[i].cName);
        printf("%d\n",July[i].iAge);
        printf("%f\n",July[i].fMarks);
    }

    Student August[10];
    for(int i = 0; i < 10; i++)

    {
        printf("Enter the data of August Student %d:\n",i+1);
        scanf("%d",&August[i].iRollNo);
        scanf("%s",August[i].cName);
        scanf("%d",&August[i].iAge);
        scanf("%f",&August[i].fMarks);
    }

     for(int i = 0; i < 5; i++)
    {
        printf("Entered data of August Student %d:\n",i+1);
        printf("%d\n",August[i].iRollNo);
        printf("%s\n",August[i].cName);
        printf("%d\n",August[i].iAge);
        printf("%f\n",August[i].fMarks);
    }

    Student September[7];

    for(int i = 0; i < 10; i++)

    {
        printf("Enter the data of September Student %d:\n",i+1);
        scanf("%d",&September[i].iRollNo);
        scanf("%s",September[i].cName);
        scanf("%d",&September[i].iAge);
        scanf("%f",&September[i].fMarks);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Entered data of September Student %d:\n",i+1);
        printf("%d\n",September[i].iRollNo);
        printf("%s\n",September[i].cName);
        printf("%d\n",September[i].iAge);
        printf("%f\n",September[i].fMarks);
    }

    








    return 0;
}