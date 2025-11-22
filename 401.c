#include<stdio.h>

struct Student
{
    int iRollNo;
    int iAge;
    char Name[50];
};

void Accept(struct Student *S)
{
    printf("Enter the data:\n");
    scanf("%d",&S->iAge);
    scanf("%d",&S->iRollNo);
    scanf("%s",S->Name);
}

void Display(struct Student *d)
{
    printf("Entered data is:\n");
    printf("%d\n",d->iAge);
    printf("%d\n",d->iRollNo);
    printf("%s\n",d->Name);
}
int main()
{

    struct Student S1;

    Accept(&S1);

    Display(&S1);

    return 0;
}