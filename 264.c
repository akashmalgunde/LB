#include<stdio.h>


struct Student
{
    /* data */
    int iRollNo;
    char cName[4];
    char ch;
};


int main()
{
    int iNo = 66000;//

    int *ptr = &iNo;

    char ch = 'b';

    char * cptr = &iNo;

    double dNo = 25.5153;

    double *dptr = &dNo;

    struct Student S1;

    struct Student *S1ptr = &S1;

    S1ptr->iRollNo = 1;



    printf("%d\n",*cptr);

    *ptr = 26;

    printf("%d\n",iNo);

    printf("%d\n",sizeof(S1));

    return 0;
}
