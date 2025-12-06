#include<stdio.h>
#include<stdbool.h>

void InsertElement(int Brr[],int iSize)
{
    printf("Enter the elements of the array:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    printf("Entered elements of the array are:\n");

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");
}

bool CheckPrime(int iNum)
{
    bool bRet = true;
    for(int i = 2; i <= iNum / 2; i++)
    {
        if(iNum % i == 0)
        {
            bRet = false;
        }
    }

    return bRet;
}

void TraverseArray(int Brr[],int iSize)
{
    bool bValue = false;
    for(int i = 0; i < iSize; i++)
    {
        bValue = CheckPrime(Brr[i]);

        if(bValue == true)
        {
            printf("%d is prime\n",Brr[i]);
        }
    }
}

int main()
{
    int Arr[5];

    InsertElement(Arr,5);

    DisplayElement(Arr,5);

    TraverseArray(Arr,5);


    return 0;
}