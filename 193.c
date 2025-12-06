#include<stdio.h>

void InsertArray(int Brr[],int iSize)
{
    printf("Enter the elements of an array:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayArray(int Brr[],int iSize)
{
    printf("Entered elements of an array are:\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }

    printf("\n");
}

void MergeArray(int Arr[],int Brr[],int iSize1,int iSize2)
{
    for(int i =0 ,j = 5; i < 5; i++,j++)
    {
        Arr[j] = Brr[i];
    }
}

int main()
{
    int Arr[5];

    int Brr[5];

    InsertArray(Arr,5);

    InsertArray(Brr,5);

    DisplayArray(Arr,5);

    DisplayArray(Brr,5);

    MergeArray(Arr,Brr,5,5);

    DisplayArray(Arr,10);

    return 0;
}