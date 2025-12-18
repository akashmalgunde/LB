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
    int iRollNo = 0;

    Student Sept[2];

    Accept(Sept,2);

    Display(Sept,2);

    printf("Enter the roll number:\n");
    scanf("%d",&iRollNo);

    bRet = CheckStudent(Sept,2,iRollNo);

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