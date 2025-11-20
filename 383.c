#include<stdio.h>

int CheckFrequency(int iNo1,int iNo2)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

    if(iNo2 < 0 && iNo2 > 9)
    {
        printf("digit should be between 0 to 9\n");
        return 0;
    }

    while(iNo1 != 0)
    {
        iDigit = iNo1 % 10;

        if(iDigit == iNo2)
        {
            iCnt++;
        }

        iNo1 = iNo1 / 10;
    }

    return iCnt;
}

int main()
{

    int iNo1 = 0;
    int iRet = 0;
    int iNo2 = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo1);

    printf("Enter the digit that you want to search (0 to 9):\n");
    scanf("%d",&iNo2);


    iRet = CheckFrequency(iNo1,iNo2);

    printf("%d is frequency of %d in %d\n",iRet,iNo2,iNo1);

    return 0;
}