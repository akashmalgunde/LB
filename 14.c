#include<stdio.h>

/*
 0-34 -> fail
 35 - 49 -> pass class
 50 - 59 -> second class
 60 - 75 -> first class
 75 - 100 -> first class with distinction
*/

void CheckClass(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Please Enter Valid marks\n");
        return;
    }
    if(fMarks <= 0 && fMarks <= 34)
    {
        printf("You are fail\n");
    }
    else if(fMarks >= 35 && fMarks <= 49)
    {
        printf("Pass Class\n");
    }
    else if(fMarks >= 50 && fMarks <= 59)
    {
        printf("Second Class\n");
    }
    else if(fMarks >= 60 && fMarks < 75)
    {
        printf("First Class\n");
    }
    else if(fMarks >= 75 && fMarks <= 100)
    {
        printf("First Class with Destinction\n");
    }
}

int main()
{
    float fMarks = 0;

    printf("Enter Your marks:\n");
    scanf("%f",&fMarks);

    CheckClass(fMarks);

    return 0;
}