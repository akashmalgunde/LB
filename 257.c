#include<stdio.h>

void Digit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;
    }
    printf("\n");
}

void DisplayDigit(int *Arr,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("Digits in %d are :",Arr[i]);
        Digit(Arr[i]);
    }
}

void InsertElement(int *Arr,int iSize)
{
    printf("Insert element:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr,int iSize)
{
    printf("Inserted elements are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

int main()
{
    int Arr[5];

    InsertElement(Arr,5);

    Display(Arr,5);

    DisplayDigit(Arr,5);

    return 0;
}