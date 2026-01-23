#include<stdio.h>

int calSumEvenIndex(int iNo)
{
    int i = 0;
    int iSum = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        i++;
        iDigit = iNo % 10;
        if(i % 2 == 0)
        {
            //printf("%d is no at even pos\n",iDigit);
            iSum = iSum + iDigit;
        }

        iNo = iNo / 10;
    }
   // printf("%d is sum\n",iSum);
    return iSum;
    
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    int iRet = -1;

    iRet = calSumEvenIndex(iNo);

    if(iRet != -1)
        printf("%d\n",iRet);
    else
        printf("There is no even position to calculate the sum\n");

    return 0;
}