#include<stdio.h>
#include<stdbool.h>
#include<string.h>


typedef struct Student Student;

struct Student
{
    int iRollNo;
    char cName[50];
    int iAge;
    float fMarks;
    char cGrade;

};

void PresentData(Student *sArr,int *iCount)
{
    sArr[0].iRollNo = 1;
    strcpy(sArr[0].cName,"s1");
    sArr[0].iAge = 22;
    sArr[0].cGrade = 'A';
    sArr[0].fMarks = 98.99; 

    sArr[1].iRollNo = 2;
    strcpy(sArr[1].cName,"s2");
    sArr[1].iAge = 22;
    sArr[1].cGrade = 'A';
    sArr[1].fMarks = 99.99; 

    sArr[2].iRollNo = 3;
    strcpy(sArr[2].cName,"s3");
    sArr[2].iAge = 32;
    sArr[2].cGrade = 'A';
    sArr[2].fMarks = 98.99; 

    sArr[3].iRollNo = 4;
    strcpy(sArr[3].cName,"s4");
    sArr[3].iAge = 22;
    sArr[3].cGrade = 'A';
    sArr[3].fMarks = 100.000; 

    sArr[4].iRollNo = 5;
    strcpy(sArr[4].cName,"s5");
    sArr[4].iAge = 22;
    sArr[4].cGrade = 'A';
    sArr[4].fMarks = 98.99; 

    sArr[5].iRollNo = 6;
    strcpy(sArr[5].cName,"s6");
    sArr[5].iAge = 22;
    sArr[5].cGrade = 'A';
    sArr[5].fMarks = 98.99; 

    *iCount = 6;
 
}


void Display(Student *sArr,int iSize)
{
    if(iSize == 0)
    {
        printf("There is no record in the Database\n");
        return;
    }

    printf("Information About the Students :\n");
    printf("Roll No\tName\tAge\tMarks\t\tGrade\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",sArr[i].iRollNo);
        printf("%s\t",sArr[i].cName);
        printf("%d\t",sArr[i].iAge);
        printf("%f\t",sArr[i].fMarks);
        printf("%c\t",sArr[i].cGrade);
        printf("\n");
    }
}

void AddStudent(Student *sArr,int *iPtr)
{
    scanf("%d",&sArr[*iPtr].iRollNo);
    scanf("%s",sArr[*iPtr].cName);
    scanf("%d",&sArr[*iPtr].iAge);
    scanf("%f",&sArr[*iPtr].fMarks);
    fflush(stdin);
    scanf("%c",&sArr[*iPtr].cGrade);
    printf("performing the opn\n");
    
    *iPtr = *iPtr + 1 ;
}

bool SearchByRoll(Student *sArr,int *iCount,int iRollNo)
{
    bool bRet = false;

    for(int i = 0; i < *iCount; i++)
    {
        if(sArr[i].iRollNo == iRollNo)
        {
            bRet = true;
        }
    }
    return bRet;
}

bool SearchByName(Student *sArr,int *iCount,char *Str)
{
    bool bRet = true;

    for(int i = 0; i < *iCount; i++)
    {
        int j = 0;
        while(Str[j] = '\0')
        {
            if(Str[j] != sArr[i].cName[j])
            {
                bRet = false;
                break;

            }
            i++;
            j++;
        }
    }
    return bRet;
}

void UpdateRollNo(Student *sArr,int iRollNo, int *iCount,char *Str)
{
    for(int i = 0; i < *iCount; i++)
    {
        if (sArr[i].iRollNo == iRollNo)
        {
            strcpy(sArr[i].cName,Str);
            printf("Changes done successfully\n");
            return;
        }
        
    }
}

void DeleteStudent(Student *sArr,int *iCount,int iRollNo)
{
    for(int i = 0; i < *iCount; i++)
    {
        while(i < *iCount)
        {
            if(sArr[i].iRollNo == iRollNo)
            {
                printf("Found\n");
                sArr[i].iRollNo = sArr[i+1].iRollNo;
                strcpy(sArr[i].cName,sArr[i+1].cName);
                sArr[i].iAge = sArr[i+1].iAge;
                sArr[i].fMarks = sArr[i+1].fMarks;
                sArr[i].cGrade = sArr[i+1].cGrade; 
            }
            i++;
        }
    }
    *iCount = *iCount - 1;
}

void DisplayMinMarks(Student *sArr,int *iPtr,float *fMin)
{
    if(*iPtr == 0)
    {
        printf("There is no record in the database can't display minimum marks\n");
        return;
    }

    *fMin = sArr[0].fMarks;

    for(int i = 1; i < *iPtr; i++)
    {
        if(*fMin > sArr[i].fMarks)
        {
            *fMin = sArr[i].fMarks;
        }
    }


}

void DisplayMaxMarks(Student *sArr,int *iPtr,float *fMax)
{
    if(*iPtr == 0)
    {
        printf("There is no record in the database can't display minimum marks\n");
        return;
    }

    *fMax = sArr[0].fMarks;

    for(int i = 1; i < *iPtr; i++)
    {
        if(*fMax < sArr[i].fMarks)
        {
            *fMax = sArr[i].fMarks;
        }
    }


}

void Swap(Student *sArr,int *iCount)
{
    for(int i = 0,j = *iCount -1; i <= (((*iCount)+1) / 2); i++,j--)
    {
        //printf("%d\n",*iCount);
        //printf("Coming %d\n",i);
        Student S;
        S = sArr[i];
        sArr[i] = sArr[j];
        sArr[j] = S;
    }
}

int main()
{
    Student sArr[100];

    int iChoise = 0;
    int iCount = 0;

    PresentData(sArr,&iCount);



    while(1)
    {
        printf("1.Display the Students\n");
        printf("2.Add the Student\n");
        printf("3.Search the Student\n");
        printf("4.Update the Student\n");
        printf("5.Delete the Student\n");
        printf("6.Display Minimum Marks in record\n");
        printf("7.Display Maximum Marks in record\n");
        printf("8.Swap\n");
        printf("9.Exit\n");

        printf("Enter Your Choise:");
        scanf("%d",&iChoise);

        if(iChoise == 1)
        {
            //Display the students
            Display(sArr,iCount);
        }
        else if(iChoise == 2)
        {
            //Add Student
            AddStudent(sArr,&iCount);
            //printf("%d is the current count\n",iCount);

        }
        else if(iChoise == 3)
        {
            //Search Student
            printf("1.Search by RollNo\n");
            printf("2.Search by Name\n");
            printf("Which Search Operation do you want to perform\n");
            printf("Enter Your Choise:\n");
            scanf("%d",&iChoise);

            if(iChoise == 1)
            {
                int iRollNo = 0;
                bool bRet = false;

                printf("Enter the roll no :\n");
                scanf("%d",&iRollNo);
                //Search by the RollNo
                bRet = SearchByRoll(sArr,&iCount,iRollNo);

                if(bRet == true)
                {
                    printf("Given Roll No %d is preseent in the records\n",iRollNo);
                }
                else
                {
                    printf("Given Roll No %d is not present in the records\n",iRollNo);
                }
            }
            else if(iChoise == 2)
            {
                //Search by the name

                bool bRet = false;
                char cName[20];

                printf("Enter the name that you want to search:\n");
                scanf("%s",&cName);

                bRet = SearchByName(sArr,&iCount,cName);

                bRet == true ? printf("Given Name %s is present in the records\n",cName) : printf("Given Name %s is not present in the records\n",cName);

            }
            else
            {
                printf("!! Invalid Choise !!\n");
            }
        }
        else if(iChoise == 4)
        {
            //Update the Student
            printf("Which updation do you want to perform\n");
            //printf("1.Roll No\n");
            printf("1.Name\n");
            printf("2.Age\n");
            printf("3.Marks\n");
            printf("4.Grade\n");

            printf("Enter your choise:\n");
            scanf("%d",&iChoise);

            int iRollNo = 0;
            printf("Enter the Roll No on which you want to perform the operation:\n");
            scanf("%d",&iRollNo);

            if(iChoise == 1)
            {
                char Str[50];

                printf("Enter the name :\n");
                scanf("%s",Str);

                UpdateRollNo(sArr,iRollNo,&iCount,Str);

            }
        }
        else if(iChoise == 5)
        {
            //Delete the student
            int iRollNo = 0;
            printf("Enter the RollNo that you want to delete-\n");
            scanf("%d",&iRollNo);

            DeleteStudent(sArr,&iCount,iRollNo);

        }
        else if(iChoise == 6)
        {
            float fMin = 0;

            DisplayMinMarks(sArr,&iCount,&fMin);

            if(iCount > 0)
                printf("%f are the minimum marks in the record\n",fMin);

        }
        else if(iChoise == 7)
        {
            float fMax = 0;


            DisplayMaxMarks(sArr,&iCount,&fMax);

            if(iCount > 0)
                printf("%f are the maximum marks in the record\n",fMax);
        }
        else if(iChoise == 8)
        {
            Swap(sArr,&iCount);
            printf("Operation Perform Successfully\n");
        }
        else if(iChoise == 9)
        {
            printf("Leaving the Application...\n");
            break;
        }
        else
        {
            printf("!! Invalid Choise !!\n");
        }

    }

    return 0;
}