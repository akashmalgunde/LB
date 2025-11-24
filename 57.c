#include<stdio.h>

void CheckEvenOdd()
{
    int iNo1 = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo1);

    if(iNo1 % 2 == 0)
    {
        printf("%d is even number\n",iNo1);
    }
    else
    {
        printf("%d is odd number\n",iNo1);
    }
}

void main()
{
    CheckEvenOdd();
}