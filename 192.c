#include<stdio.h>

void InsertElement(int Brr[],int iSize)
{
    printf("Enter the elements of the array:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    printf("Elements in array are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");
}

void CheckEvenOdd(int Brr[],int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        if(Brr[i] % 2 == 0)
        {
            printf("%d is Even\n",Brr[i]);
        }
        else
        {
            printf("%d is Odd\n",Brr[i]);
        }
    }
}

int main()
{
    int Arr[5];

    InsertElement(Arr,5);

    DisplayElement(Arr,5);

    CheckEvenOdd(Arr,5);


    return 0;
}