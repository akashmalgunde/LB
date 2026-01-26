#include<stdio.h>
#define bool int
#define true 1
#define false 0

int countDigit(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
}

int calculateSquare(int iNo)
{
    return iNo * iNo;
}

int calculatePower(int iCount)
{
    int iPower = 1;
    for(int i = 1; i <= iCount; i++)
    {
        iPower = iPower * 10;
    }

    return iPower;
}

bool checkAutomorphic(int iNo)
{

    bool bRet = false;

    if(calculateSquare(iNo) % calculatePower(countDigit(iNo)) == iNo)
        bRet = true;

    return bRet;

}

int main()
{

    int iNo = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    if(checkAutomorphic(iNo))
        printf("Automorphic\n");
    else
        printf("Not Automorhic\n");

    return 0;
}