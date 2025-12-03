#include<stdio.h>

int CalculateEven(int Barr[],int iSize)
{
    int iCountE = 0;
    int iCountO = 0;
    for(int i = 0; i < 5; i++)
    {
        if(Barr[i] % 2 == 0)
        {
            iCountE++;
        }
        else
        {
            iCountO++;
        }
    }
    return iCountE;

}

int main()
{
    int Arr[5];

    int iRet = 0;

    printf("Enter the numbers:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Entered numbers are:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",Arr[i]);
    }

    iRet = CalculateEven(Arr,5);

    printf("%d is count of the Even numbers\n",iRet);
    printf("%d is count odd numbers in array\n",5 - iRet);
    

    return 0;
}


/*
            0       1       2       3       4       5
    Arr     10      20      30      40      50      60  

*/