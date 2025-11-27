#include<stdio.h>

int Addition()
{
    int iNo1 = 4;
    int iNo2 = 3;

    int iAns = iNo1 + iNo2;

    return iAns;
    

}


int main()
{
    int iRet = 0;

    iRet = Addition();

    printf("Addition is : %d",iRet);

    return 0;
}