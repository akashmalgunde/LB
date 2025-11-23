#include<stdio.h>

int ReverseNo(int iNo)
{
    int iRet = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRet = iRet * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRet;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = ReverseNo(iNo);

    printf("Resverse of %d is : %d\n",iNo,iRet);

    return 0;
}