#include<stdio.h>

int checkFirstRepeat(int *iArr,int iSize)
{
    int iRet = -1;
    for(int i = 0; i < iSize - 1; i++)
    {
        for(int j = i +1; j <= iSize; j++)
        {
            if(iArr[i] == iArr[j]) 
            {
                iRet = iArr[i];
                break;
            }
        }
        if(iRet != -1)
            break;
    }

    return iRet;
}

int main()
{
    int iArr[] = {10, 5, 3, 4, 3, 9, 6};

    int iRet = 0;

    iRet = checkFirstRepeat(iArr,7);

    if(iRet != -1)
        printf("%d is the first repeatable\n",iRet);
    else
        printf("There is no repating elements in array\n");

    return 0;
}