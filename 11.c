#include<stdio.h>

unsigned int Addition(unsigned int iValue1,unsigned int iValue2)
{
    unsigned int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;
}

int main()
{
    unsigned int iNo1 = 10;
    unsigned int iNo2 = 11;

    unsigned int iRet = 0;

    iRet = Addition(iNo1,iNo2);

    printf("Answer is : %d\n",iRet);

    return 0;
}