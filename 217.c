#include<stdio.h>

int CalculateSum(int Arr[],int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
}


int main()
{
    int iRet = 0;

    int Arr[5] = {10,20,30};

    iRet = CalculateSum(Arr,3);

    printf("Ans is : %d\n",iRet);


}