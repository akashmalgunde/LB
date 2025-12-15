#include<stdio.h>

void Display(float fMarks)
{
    if(fMarks < 0)
    {
        printf("Note : Enter valid Marks it should be positive\n");
        return;
    }
    if(fMarks <= 0 && fMarks < 35)
    {
        printf("Fail\n");
    }
    else if(fMarks >= 35 && fMarks <= 50)
    {
        printf("Pass\n");
    }
    else if(fMarks > 50 && fMarks < 60)
    {
        printf("Second class\n");
    }
    else if(fMarks > 60 && fMarks < 75)
    {
        printf("First class\n");
    }
    else
    {
        printf("First class with distinction\n");
    }
}

int main()
{
    float fMarks = 0.0;

    printf("Enter the marks:\n");
    scanf("%f",&fMarks);

    Display(fMarks);

    return 0;
}