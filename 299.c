#include<stdio.h>

void Accept(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr,int iSize)
{
    for(int i = 0; i< iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

int main()
{
    int Arr[5];

    Accept(Arr,5);

    Display(Arr,5);

    return 0;
}