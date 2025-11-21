#include<stdio.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char Name[25];
    int iAge;
};

void Accept(Student *S)
{
    printf("Enter the roll no:\n");
    scanf("%d",&S->iRollNo);
    printf("Enter the name:\n");
    scanf("%s",S->Name);
    printf("Enter the Age:\n");
    scanf("%d",&S->iAge);
}

void Display(Student *S)
{
    printf("Roll No is : %d\n",S->iRollNo);
    printf("Name is : %s\n",S->Name);
    printf("Age is : %d\n",S->iAge);
}

void ConvertUpper(char *ptr)
{
    int i = 0;
    while(ptr[i] != '\0')
    {
        if(ptr[i] >= 'a'  && ptr[i] <= 'z')
        {
            ptr[i] = ptr[i] - 32;
        }
        i++;
    }
}


int main()
{
    Student S1;

    Accept(&S1);

    Display(&S1);

    ConvertUpper(S1.Name);

    Display(&S1);

    return 0;
}