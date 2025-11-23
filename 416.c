#include<stdio.h>

int CalculateAvg(int iNo)
{
    int iTemp = iNo;
    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    int iAvg = 0;

    while(iTemp != 0)
    {
        iCount++;
        iTemp = iTemp / 10;
    }
    //printf("%d\n",iCount);
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    //printf("%d\n",iSum);
    iAvg = iSum / iCount;

    printf("%d\n",iAvg);

    return iAvg;

}

int main()
{

    int iNo = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    iRet = CalculateAvg(iNo);

    printf("%d is avg of %d\n",iRet,iNo);

    return 0;
}