#include<stdio.h>
#include<stdbool.h>

bool CheckSquare(int iNo)
{
    bool bRet = false;
    int i = 1;

    while(i*i < iNo)
    {
        i++;
    }
    if(i*i == iNo)
    {
        bRet = true;
    }
    return bRet;
}

int Display(int *Arr,int iSize)
{
    bool bRet = false;
    int iCnt = 0;

    for(int i = 0; i < iSize; i++)
    {
        bRet = CheckSquare(Arr[i]);

        if(bRet == true)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iRet = 0;

    int Arr[5] = {1,4,9,26};

    iRet = Display(Arr,5);

    printf("Squares in an array are: %d\n",iRet);

    return 0;
}