#include<stdio.h>
#include<stdbool.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
    float fMarks;
};

int CheckStudentAge(Student *ptr,int iSize,int iAge)
{
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(ptr[i].iAge == iAge)
        {
            iCnt++;
        }
    }
    return iCnt;
}

void Accept(Student *ptr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("Enter the data of July Student %d:\n",i+1);
        scanf("%d",&ptr[i].iRollNo);
        scanf("%s",ptr[i].cName);
        scanf("%d",&ptr[i].iAge);
        scanf("%f",&ptr[i].fMarks);
    }
}

void Display(Student *ptr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("Entered data of July Student %d:\n",i+1);
        printf("%d\n",ptr[i].iRollNo);
        printf("%s\n",ptr[i].cName);
        printf("%d\n",ptr[i].iAge);
        printf("%f\n",ptr[i].fMarks);
    }
}

int main()
{

    int iCnt = 0;
    int iAge = 0;

    Student Sept[2];

    Accept(Sept,2);

    Display(Sept,2);

    printf("Enter the age:\n");
    scanf("%d",&iAge);

    iCnt = CheckStudentAge(Sept,2,iAge);

    printf("There are %d is the total number of student with age %d\n",iCnt,iAge);


    return 0;
}