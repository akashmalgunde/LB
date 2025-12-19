#include<stdio.h>

void mystrcpy(char *Dest,char *Src)
{
    int i = 0;

    while(Src[i] != '\0')
    {
        Dest[i] = Src[i];
        i++;
    }
    Dest[i] = '\0';
}
typedef struct Date
{
    int iDay;
    int iMonth;
    int iYear;
}Date;

typedef struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
    float fMarks;
    Date DOB;
    Date DOA;
    Date Exam[5];
}Student;

void Accept(Student *S)
{
    S->iRollNo = 1;
    mystrcpy(S->cName,"S1");
    S->iAge = 22;
    S->fMarks = 99.90;
    S->DOA.iDay = 12;
    S->DOA.iMonth = 11;
    S->DOA.iYear = 2025;

    S->DOB.iDay = 22;
    S->DOB.iMonth = 11;
    S->DOB.iYear = 2003;

    S->Exam[0].iDay = 11;
    S->Exam[0].iMonth = 11;
    S->Exam[0].iYear = 2025;

    S->Exam[1].iDay = 12;
    S->Exam[1].iMonth = 11;
    S->Exam[1].iYear = 2025;

    S->Exam[2].iDay = 13;
    S->Exam[2].iMonth = 11;
    S->Exam[2].iYear = 2025;

    S->Exam[3].iDay = 14;
    S->Exam[3].iMonth = 11;
    S->Exam[3].iYear = 2025;

    S->Exam[4].iDay = 15;
    S->Exam[4].iMonth = 11;
    S->Exam[4].iYear = 2025;
    
}

void Display(Student *S)
{
    printf("%d\n",S->iRollNo);
    printf("%s\n",S->cName);
    printf("%d\n",S->iAge);

    
    printf("%f\n",S->fMarks);
    printf("%d - %d - %d\n",S->DOA.iDay,S->DOA.iMonth,S->DOA.iYear);
    printf("%d - %d - %d\n",S->DOB.iDay,S->DOB.iMonth,S->DOB.iYear);

    printf("%d - %d - %d\n",S->Exam[0].iDay,S->Exam[0].iMonth,S->Exam[0].iYear);
    printf("%d - %d - %d\n",S->Exam[1].iDay,S->Exam[1].iMonth,S->Exam[1].iYear);
    printf("%d - %d - %d\n",S->Exam[2].iDay,S->Exam[2].iMonth,S->Exam[2].iYear);
    printf("%d - %d - %d\n",S->Exam[3].iDay,S->Exam[3].iMonth,S->Exam[3].iYear);
    printf("%d - %d - %d\n",S->Exam[4].iDay,S->Exam[4].iMonth,S->Exam[4].iYear);

}

int main()
{
    Student S1;

    Accept(&S1);

    Display(&S1);


    return 0;
}