#include<stdio.h>

void DisplayClass(float fMarks)
{
    if(fMarks < 0)
    {
        fMarks = -fMarks;
    }
    if(fMarks < 40)
    {
        printf("Fail\n");
    }

    else if(fMarks >= 40  && fMarks < 55)
    {
        printf("Pass\n");
    }
    else if(fMarks >= 55 && fMarks < 65 )
    {
        printf("Second class\n");
    }
    else if(fMarks >= 65 && fMarks < 75)
    {
        printf("First Class\n");
    }
    else if(fMarks >= 75)
    {
        printf("First class with Destinction\n");
    }

}


int main()
{
    float fMarks = 0.0;

    printf("Enter the marks:");
    scanf("%f",&fMarks);

    DisplayClass(fMarks);

    return 0;
}