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

bool checkExistance(int *Arr,int iSize,int iNo)
{
    bool bRet = false;
    int i = 1;

    for(i = 1; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }

    }

    if(i == iSize)
        return false;
    else 
        return true;

}

int main()
{
    int iSize = 0;
    int iNo = 0;
    bool bRet = false;

    printf("Enter the no of elements:\n");
    scanf("%d",&iSize);

    int *Arr = (int*)malloc(sizeof(int) * iSize);

    Accept(Arr,iSize);

    Display(Arr,iSize);

    printf("Enter the number that you want to search in an array:\n");
    scanf("%d",&iNo);

    bRet = checkExistance(Arr,iSize,iNo);

    if(bRet == true)
        printf("%d is present in array\n",iNo);
    else
        printf("%d is not present in an array\n",iNo);

    return 0;
}