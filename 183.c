#include<stdio.h>

void Display(int iValue)
{
    int iDigit = 0;
    int iSum = 0;
    int iTemp = 0;
    int iCnt = 0;
    

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
            iCnt++;
        }
    }
    printf("%d is total count of digit whose sum is 10\n",iCnt);
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}