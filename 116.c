#include<stdio.h>

int Addition()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);


    return iNo1 + iNo2;
}

int Subtraction()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);


    return iNo1 - iNo2;
}

int Multiplication()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);


    return iNo1 * iNo2;
}

int Division()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);


    return iNo1 / iNo2;
}

int main()
{
    int iAns = 0;

    char ch = '\0';
    printf("Enter the char:\n");
    scanf("%c",&ch);

    if(ch == '+')
    {
        iAns = Addition();
        printf("Ans is : %d",iAns);
    }
    else if(ch == '-')
    {
        iAns = Subtraction();
        printf("Ans is : %d",iAns);
    }
    else if(ch == '*')
    {
        iAns = Multiplication();
        printf("Ans is : %d",iAns);
    }
    else if(ch == '/')
    {
        iAns = Division();
        printf("Ans is : %d",iAns);
    }

    return 0;
}