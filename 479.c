#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Accept(int *Arr,int iSize)
{
    printf("Enter the no of elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *arr,int iSize)
{
    printf("Entered elemets are:\n");
    for(int i = 0; i < iSize; i++)
        printf("%d\t",arr[i]);

    printf("\n");
}

int checkExistance(int *Arr,int iSize,int iNo)
{
    bool bRet = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }

    }

    return -1;

}

int main()
{
    int iSize = 0;
    int iNo = 0;
    int iRet = 0;

    printf("Enter the no of elements:\n");
    scanf("%d",&iSize);

    int *Arr = (int*)malloc(sizeof(int) * iSize);

    Accept(Arr,iSize);

    Display(Arr,iSize);

    printf("Enter the number that you want to search in an array:\n");
    scanf("%d",&iNo);

    iRet = checkExistance(Arr,iSize,iNo);

    if(iRet != -1)
        printf("%d is index of given element in an array\n",iRet);
    else 
        printf("%d is not found in an array\n",iNo);

    return 0;
}