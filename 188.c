#include<stdio.h>

void StoreEle(int Brr[],int iSize)
{
    printf("Enter an array elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayEle(int Brr[],int iSize)
{
    printf("Entered elements of an array are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
}

int main()
{

    int Arr[5];

    StoreEle(Arr,5);

    DisplayEle(Arr,5);


    return 0;
}