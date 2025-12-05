#include<stdio.h>


void Display()
{
    int iDigit = 0;
    int iTemp = 0;
    int iSum = 0;

    for(int i = 1; i <= 25; i++)
    {
        iTemp = i;
        iSum = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }

        printf("%d is sum of digit of %d\n",iSum,i);
        
    }
}

int main()
{
    Display();

    return 0;
}