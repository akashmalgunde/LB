#include<stdio.h>
#include<string.h>
typedef struct Date Date;
typedef struct Student Student;

struct Date
{
    int iDay;
    int iMonth;
    int iYear;
};

struct Student
{
    /* data */
    int iRollNo;
    char Str[50];
    int iAge;
    float fMarks;
    Date DOA;
    Date DOB;
    Date Exam[5];
};

void Display(Student *S2)
{
    printf("Entered data is :\n");
    printf("%d\n",S2->iAge);
    printf("%s\n",S2->Str);
    printf("%d\n",S2->iAge);
    printf("%f\n",S2->fMarks);
    printf("%d - %d - %d\n",S2->DOA.iDay,S2->DOA.iMonth,S2->DOA.iYear);
    printf("%d - %d - %d\n",S2->DOB.iDay,S2->DOB.iMonth,S2->DOB.iYear);
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d - %d - %d\n",S2->Exam[i].iDay,S2->Exam[i].iMonth,S2->Exam[i].iYear);
    }
    
}

int main()
{

    Student S[5];

    for(int i = 0; i < 5; i++)
    {
        S[i].iRollNo = 1;
    strcpy(S[i].Str,"S1");
    S[i].iAge = 22;
    S[i].fMarks = 99.90;
    S[i].DOA.iDay = 13;
    S[i].DOA.iMonth = 11;
    S[i].DOA.iYear = 2025;
    S[i].DOB.iDay = 20;
    S[i].DOB.iMonth = 03;
    S[i].DOB.iYear = 2003;
    S[i].Exam[0].iDay = 13;
    S[i].Exam[0].iMonth = 11;
    S[i].Exam[0].iYear = 2025;
    S[i].Exam[1].iDay = 14;
    S[i].Exam[1].iMonth = 11;
    S[i].Exam[1].iYear = 2025;
    S[i].Exam[2].iDay = 15;
    S[i].Exam[2].iMonth = 11;
    S[i].Exam[2].iYear = 2025;
    S[i].Exam[3].iDay = 16;
    S[i].Exam[3].iMonth = 11;
    S[i].Exam[3].iYear = 2025;
    S[i].Exam[4].iDay = 17;
    S[i].Exam[4].iMonth = 11;
    S[i].Exam[4].iYear = 2025;
    }

    //Student S2;

    //S2 = S1;

    for(int i = 0; i < 5; i++)
    {
        printf("for %d ",i+1);
        Display(&S[i]);
        printf("\n");
    }


    return 0;
}