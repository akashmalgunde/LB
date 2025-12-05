#include<stdio.h>


void StoreArray(int Brr[],int iSize)
{
    printf("Enter elements are:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}


void DisplayArray(int Brr[],int iSize)
{
    printf("Elements are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
}


int main()
{
    int Arr[5];

    StoreArray(Arr,5);

    DisplayArray(Arr,5);

    return 0;
}