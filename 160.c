#include<stdio.h>
#include<stdbool.h>


bool Search(int Arr[],int iNum)
{
    int i = 0;

    for( i = 0; i < 5; i++)
    {
        if(Arr[i] == iNum)
        {
            return true;
            break;
        }
    }
    if(i == 5)
    {
        return false;
    }
}

int main()
{

    int Arr[5];

    int iNum = 0;

    bool bRet = false;

    printf("Enter the number:");

    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements are:\n");
    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }


    printf("Enter the element that you want to search:");
    scanf("%d",&iNum);

    bRet = Search(Arr,iNum);

    if(bRet == true)
    {
        printf("Element is found in array\n");
    }
    else
    {
        printf("Element not found in arrray\n");
    }

    


    return 0;
}


    /*
    
        Arr     10          20      30      40      50  

        Enter the number:

        iCnt        0       1       2       3       4           5

    */