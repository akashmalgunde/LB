#include<stdio.h>

typedef unsigned int UINT;

UINT Addition(int iValue1,int iValue2)
{
    UINT iRet = 0;

    iRet = iValue1 + iValue2;
    return iRet;
}

int main()
{
    UINT iNo1 = 10;
    UINT iNo2 = 11;

    UINT iAns = 0;

    iAns = Addition(iNo1,iNo2);

    printf("Answer is : %d\n",iAns);

    return 0;
}