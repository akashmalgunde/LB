#include<stdio.h>

int CountFreq(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        if(iNo % 10 == 8)
        {
            iCnt++;
        }   
        iNo = iNo /10;
    }

    return iCnt;
}

int main()
{

    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    iRet = CountFreq(iNo);

    printf("%d is count of 8 in %d\n",iRet,iNo);

    return 0;
}