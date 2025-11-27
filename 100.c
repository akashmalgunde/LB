#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    char ch = '\0';

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);

    printf("Enter the operation that you want to perform:\n");
    
    fflush(stdin);

    scanf("%c",&ch);

    if(ch == '+')
    {
        printf("You are performing addition\n");
    }
    else if(ch == '-')
    {
        printf("You are performing subtraction\n");
    }
    else if(ch == '*')
    {
        printf("You are performing multiplication\n");
    }
    else if(ch == '/')
    {
        printf("You are performing division\n");
    }
    else
    {
        printf("Other than this choise\n");
    }

    return 0;
}