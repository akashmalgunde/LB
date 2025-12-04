#include<stdio.h>


void CalculateSum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 16;
        printf("%d ",iDigit);
        iNo = iNo / 16;
    }
    printf("\n");

   // return iSum;
}

void DisplayArr(int *Arr,int iSize)
{

    for(int i = 0; i< iSize; i++)
    {
        int iRet = 0;
        CalculateSum(Arr[i]);
    
    }
}


int main()
{
    int iNo[5] = {25,10,40,455,60};
    

    DisplayArr(iNo,5);


    

    return 0;
}