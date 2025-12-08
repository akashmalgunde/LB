#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNum)
{
    if(iNum % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void InsertElement(int Brr[],int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }
}

void DisplayElement(int Brr[],int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\n",Brr[i]);
    }
    printf("\n");
}

void Operation(int Brr[],int iSize)
{
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        bRet = CheckEven(Brr[i]);

        if(bRet == true)
        {
            printf("%d is even\n",Brr[i]);
        }
        else
        {
            printf("%d is odd\n",Brr[i]);
        }
    }
}

int main()
{
    int Arr[5];

    InsertElement(Arr,5);

    DisplayElement(Arr,5);

    Operation(Arr,5);



    return 0;
}