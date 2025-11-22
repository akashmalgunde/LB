#include<stdio.h>
#include<string.h>

struct Student
{
    int iRollNo;
    char Name[50];
    int iAge;
};

int main()
{
    struct Student Sarr;

    Sarr.iAge = 22;
    strcpy(Sarr.Name,"S1");
    Sarr.iRollNo = 21;

    printf("%d\n",Sarr.iAge);
    printf("%s\n",Sarr.Name);
    printf("%d\n",Sarr.iAge);

    return 0;
}