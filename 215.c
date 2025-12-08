#include<stdio.h>

void InsertElement(int Brr[],int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\n",Brr[i]);
    }
    printf('\n');
}

int main()
{
    int Arr[5];

    InsertElement(Arr,5);

    DisplayElement(Arr,5);



    return 0;
}