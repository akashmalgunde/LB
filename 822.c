#include<stdio.h>
#include<stdlib.h>
# define TRUE 1
# define FALSE 0
# define bool int

bool linearSearch(int *Arr,int iSize,int iElement)
{
    bool bRet = FALSE;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == iElement)
        {
            bRet = TRUE;
            break;
        }
    }

    return bRet;
}

void Accept(int *Arr,int iSize)
{
    printf("Enter the array elements:\n");
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr,int iSize)
{
    if(iSize == 0)
    {
        printf("there are no elements in array\n");
    }
    else
    {
        printf("Enterered array elements are:\n");
        for(int i = 0; i < iSize; i++)
        {
            printf("%d ",Arr[i]);
            printf("%d\n",i+1);
        }
        printf("\n");
    }      
}

int main()
{

    int iSize = 0;
    int iElement = 0;
    bool bRet = FALSE;

    printf("Enter the size:\n");
    scanf("%d",&iSize);

    int *Arr = (int*)malloc(sizeof(int)*iSize);
    Display(Arr,iSize);
    Accept(Arr,iSize);
    Display(Arr,iSize);

    printf("Enter the element that you want to search in the array:\n");
    scanf("%d",&iElement);

    bRet = linearSearch(Arr,iSize,iElement);

    if(bRet == TRUE)
    {
        printf("%d is present in the array\n",iElement);
    }
    else
    {
        printf("%d is not present in the array\n",iElement);
    }





    




    return 0;
}