#include<stdio.h>
#include<string.h>


typedef struct Student Student;

struct Student
{
    int iRoll;
    char name[25];
    int iAge;
};

void Display(Student *stu)
{
    printf("%d\n",stu->iAge);
    printf("%s\n",stu->name);
    printf("%d\n",stu->iAge);

    strcpy(stu->name,"stud1");

    printf("%s\n",stu->name);
}

int main()
{
    Student s1;

    Display(&s1);


    return 0;
}