#include<stdio.h>

void CheckClass()
{

    int iMarks = 53;

    if(iMarks >= 75)
    {
        printf("Distinction");
    }
    else if(75 > iMarks && iMarks >= 65)
    {
        printf("First Class");
    }
    else if(iMarks >= 55 && iMarks < 65)
    {
        printf("Second Class");
    }
    else if(iMarks >= 40 && iMarks < 55)
    {
        printf("pass");
    }
    else if(iMarks < 40)
    {
        printf("Fail");
    }

}


int main()
{
    CheckClass();

    return 0;
}



/*

    int iMarks = 53;

    if(iMarks >= 75)
    {
        printf("Distinction");
    }
    else if(75 > iMarks && iMarks >= 65)
    {
        printf("First Class");
    }
    else if(iMarks >= 55 && iMarks < 65)
    {
        printf("Second Class");
    }
    else if(iMarks >= 40 && iMarks < 55)
    {
        printf("pass");
    }
    else if(iMarks < 40)
    {
        printf("Fail");
    }


    iMarks  53

    Cmd Prompt

    pass



*/