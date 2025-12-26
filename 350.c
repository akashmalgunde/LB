#include<stdio.h>
#include<stdlib.h>

int Sum(int *Arr,int iSize)
{
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
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
    printf("Elements are:\n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}


int main()
{
    int iSize = 0;
    int iRet = 0;
    printf("Enter the size:\n");
    scanf("%d",&iSize);


    int *Arr = (int *)malloc(sizeof(int) * iSize);

    Accept(Arr,iSize);

    Display(Arr,iSize);

    printf("%d is sum of all elemnts in the array\n",Sum(Arr,iSize));

    return 0;
}