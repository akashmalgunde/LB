#include<stdio.h>

void InsertElements(int Brr[],int iSize)
{
    printf("Enter the elements of an array:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    printf("Elements of the array are:\n");

    for(int i =0; i < iSize; i++)
    {
        printf("%d",Brr[i]);
    }
    printf("\n");
}

void DisplayAlternate(int Brr[],int iSize)
{
    printf("Alternate elements of the give array are:\n");

    for(int i = 0; i < iSize; i = i + 2)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");
}

int main()
{
    int Arr[5];

    InsertElements(Arr,5);

    DisplayElement(Arr,5);

    DisplayAlternate(Arr,5);

    return 0;
}