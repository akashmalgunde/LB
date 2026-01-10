#include<stdio.h>
# define bool int
#define true 1
#define false 0

bool checkAtLeft(int *iArr,int iPosition)
{
    int iNo = 0;
    bool bRet = false;

    iNo = iArr[iPosition];

    for(int i = 0; i < iPosition; i++)
    {
        if(iArr[iPosition] == iArr[i])
        {
            bRet = true;
            break;
        }
    }

    return bRet;
}


int checkFirstRepeat(int *iArr,int iSize)
{
    int iRet = -1;
    int i = 0;
    int j = 0;
    bool checkLeft = false;
    for( i = 0; i < iSize; i++)
    {
        checkLeft = checkAtLeft(iArr,i);
        if(checkLeft == false)
        {
            for( j = i + 1; j < iSize; j++)
        {

            if(iArr[i] == iArr[j])
            {
                break;
            }
        }
        if(j == iSize)
        {
            iRet = iArr[i];
            break;
        }
        }
    }

    return iRet;
}

int main()
{
    int iArr[] = {2,3,4,2,3,5,4,5};

    int iRet = 0;

    iRet = checkFirstRepeat(iArr,8);

    if(iRet == -1)
    {
        printf("There is no unrepeated element is there in array");
    }
    else
    {
        printf("%d is first non repeated element is there in array\n",iRet);
    }
    return 0;
}