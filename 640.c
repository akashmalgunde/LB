#include<stdio.h>

int CheckLargest(int *ptr,int iSize)
{
    int iMax = ptr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(iMax < ptr[i])
            iMax = ptr[i];
    }


    return iMax;
}

int main()
{
    int Arr[5] = {100,20,56,5000,5001};

    int iRet = 0;

    iRet = CheckLargest(Arr,5);

    printf("%d\n",iRet);

    return 0;
}