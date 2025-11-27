#include<stdio.h>

void Sum()
{
    int iNum = 0;
    int iDigit = 0;
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iOrig = 0;
    int iSum = 0;

    printf("Enter a number:\n");
    scanf("%d",&iNum);

    iOrig = iNum;

    while(iOrig != 0)
    {
        iCnt1++;
        iOrig = iOrig / 10;
    }

    for(iCnt2 = 1; iCnt2 <= iCnt1; iCnt2++)
    {
        iDigit = iNum % 10;

        if(iCnt2 == 1 || iCnt2 == iCnt1)
        {
            iSum = iSum + iDigit;
        }

        iNum = iNum / 10;
    }

    printf("Sum of first and last digit is : %d\n",iSum);
}

int main()
{
    Sum();

    return 0;
}