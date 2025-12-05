#include<stdio.h>
#include<stdbool.h>

void InsertElements(int Brr[],int iSize)
{
    printf("Enter the elements of an array:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    printf("Entered elements of an array are:\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");
}

bool SearchElement(int Brr[],int iSize,int iSearch)
{
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        if(Brr[i] == iSearch)
        {
            return true;
            break;
        }
    }
    return bRet;
}

int main()
{
    int Arr[5];
    bool bValue = false;
    int iSearchEle = 0;

    InsertElements(Arr,5);

    DisplayElement(Arr,5);

    printf("Enter the element that you want to search:\n");
    scanf("%d",&iSearchEle);

    bValue = SearchElement(Arr,5,iSearchEle);

    if(bValue == true)
    {
        printf("Element is present in array\n");
    }
    else
    {
        printf("Element is not present in an array\n");
    }

    return 0;
}