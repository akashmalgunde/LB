#include<stdio.h>

void Display(int iValue)
{
    int iDigit = 0;
    int iSum = 0;
    int iTemp = 0;
    

    for(int i = 0; i <= iValue; i++)
    {
        iTemp = i;
        iSum = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        if(iSum == 10)
        {
            printf("sum of digit of %d is 10\n",i);
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}