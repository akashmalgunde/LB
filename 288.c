#include<stdio.h>

struct Student
{
    int iRollNo;
    float fMarks;
    int iMarks;
};

struct Student Accept()
{
    struct Student S;

    scanf("%d",&S.iRollNo);
    scanf("%f",&S.fMarks);
    scanf("%d",&S.iMarks);

    return S;
}

void Display(struct Student S1)
{
    printf("%d\n",S1.iRollNo);
    printf("%f\n",S1.fMarks);
    printf("%d\n",S1.iMarks);
}


int main()
{
    struct Student S1;
    struct Student S2;

    
    S1 = Accept();

    Display(S1);

    return 0;
}