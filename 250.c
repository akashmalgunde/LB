#include<stdio.h>
#include<string.h>

struct Student
{
    int iRollNo;
    char Name[25];
    int iAge;
};


int main()
{
    struct Student S1 = {1,"Ram",25};

    printf("%d\n",sizeof(S1));

    printf("%d",sizeof(int));

    printf("%d\n",S1.iRollNo);

    strcpy(S1.Name,"RAM");

    printf("%s\n",S1.Name);

    printf("%d\n",S1.iAge);

    return 0;
}