#include<stdio.h>

void Arithmetic()
{

    int iNo1 = 4;
    int iNo2 = 3;

    char ch = '\0';

    
    printf("1.+\n");
    printf("2.-\n");
    printf("3.*\n");
    printf("4./\n");
    printf("5.m\n");

    printf("Enter the operation that you want to perform:\n");
    scanf("%c",&ch);



    if(ch == '+')
    {
        printf("Addition is: %d\n",iNo1 + iNo2);
    }
    else if(ch == '-')
    {
        printf("Subtraction is: %d \n",iNo1 - iNo2);
    }
    else if(ch == '*')
    {
        printf("Multiplication is: %d \n",iNo1 * iNo2);
    }
    else if(ch == '/')
    {
        printf("Division is: %d\n",iNo1 / iNo2);
    }
    else if(ch == 'm')
    {
        printf("Mod is: %d\n",iNo1 % iNo2);
    }

}

int main()
{
    Arithmetic();

    return 0;
}