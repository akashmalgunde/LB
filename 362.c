#include<stdio.h>
#include<string.h>

typedef struct Student Student;

struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
};

int main()
{
    Student s1;

    s1.iRollNo = 1;
    strcpy(s1.cName,"S1");
    s1.iAge = 22;

    printf("%d\n",s1.iRollNo);
    printf("%s\n",s1.cName);
    printf("%d\n",s1.iAge);

    return 0;
}