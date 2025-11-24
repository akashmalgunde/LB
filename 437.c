#include<stdio.h>
#include<stdlib.h>

int CountOdd(int *Arr,int iSize)
{
    int icount = 0;
    //perform operation
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
            icount++;
    }

    return icount;

   // return iSum;
}

int main()
{
    int iSize = 0;
    int iRet = 0;

    printf("Enter the size of the array:\n");
    scanf("%d",&iSize);

    int *Arr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter the elements:\n");

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("\n");
    

    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");

    iRet = CountOdd(Arr,iSize);

    //printf("%d is sum of all elements in the array\n",iRet);

    printf("%d is the count of odd number\n",iRet);


    free(Arr);
    

    return 0;
}