
#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns; 
}

int main()
{
    int iNo1 = 10;
    int iNo2 = 11;

    int iRet = 0;

    iRet = Addition(iNo1,iNo2);

    printf("Addition is : %d\n",iRet);


    return 0;
}