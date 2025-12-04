#include<stdio.h>


int CalculateSum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

void DisplayArr(int *Arr,int iSize)
{

    for(int i = 0; i< iSize; i++)
    {
        int iRet = 0;
        iRet = CalculateSum(Arr[i]);
        printf("%d is sum and &d is number\n",iRet,Arr[i]);
    }
}


int main()
{
    int iNo[5] = {25,10,40,455,60};
    

    DisplayArr(iNo,5);


    

    return 0;
}