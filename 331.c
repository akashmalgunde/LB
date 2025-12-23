#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("%d is Even\n",iNo);
    }
    else
    {
        printf("%d is Odd\n",iNo);
    }
}

void Accept(int *Arr,int iSize)
{
    printf("Enter the elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr,int iSize)
{
    printf("Entered elements are\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

void PerformOpn(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        DisplayEvenOdd(Arr[i]);
    }
}

int main()
{
    int iSize = 0;

    printf("Enter the size of array:\n");
    scanf("%d",&iSize);

    int *Arr = (int*)malloc(sizeof(int)*5);

    Accept(Arr,iSize);

    Display(Arr,iSize);

    PerformOpn(Arr,iSize);

    return 0;
}