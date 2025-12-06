#include<stdio.h>

void InsertElement(int Brr[],int iSize)
{
    printf("Enter the elements of an array:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    printf("Entered elements are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\n",Brr[i]);
    }
    printf("\n");
}

int CalculateSum(int Brr[],int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Brr[i];
    }

    return iSum;
}

int main()
{
    int Arr[5];

    int iRet = 0;

    InsertElement(Arr,5);

    DisplayElement(Arr,5);

    iRet = CalculateSum(Arr,5);

    printf("%d is sum of the array elements\n",iRet);

    return 0;
}