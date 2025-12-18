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

bool CheckStudent(Student *ptr,int iSize,int iRollNo)
{
    bool bRet = false;

    for(int i = 0; i < iSize; i++)
    {
        if(ptr[i].iRollNo == iRollNo)
        {
            bRet = true;
            break;
        }
    }
    return bRet;
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

    bool bRet = false;

    Student Sept[5];

    Accept(Sept,5);

    Display(Sept,5);

    bRet = CheckStudent(Sept,5,101);

    if(bRet == true)
    {
        printf("Student found\n");
    }
    else
    {
        printf("Student not found\n");
    }


    return 0;
}