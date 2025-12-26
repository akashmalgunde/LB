#include<stdio.h>

void Display1(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
            printf("%d\t",Arr[i]);
        
        
    }
    printf("\n");
}

void Display(int *Arr,int iSize)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

void Accept(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

int main()
{
    int Arr[5];

    Accept(Arr,5);

    Display(Arr,5);

    Display1(Arr,5);

    return 0;
}