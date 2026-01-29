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


int calPower(int iNo)
{
    int iPower = 1;
    //printf("%d is count of digit\n",countDigit(iNo));
    for(int i = 1; i < countDigit(iNo); i++)
    {
        iPower = iPower * 10;
    }

    //printf("%d\n",iPower);
    return iPower;
}

bool checkZeroAtstart(int iNo)
{
    bool bRet = true;
    if(iNo / calPower(iNo) == 0)
        bRet = false;
    
    return bRet;
}

bool checkPresenceOfZero(int iNo)
{
    bool bRet = false;
    while(iNo != 0)
    {
        if(iNo % 10 == 0)
        {
            bRet = true;
            break;
        }
        iNo = iNo / 10;
    }

    return bRet;
}

bool checkDuck(int iNo)
{
    bool bRet = false;
    if((checkZeroAtstart(iNo)) && checkPresenceOfZero(iNo))
    {
        bRet = true;
    }
    //printf("\n%d",checkZeroAtstart(iNo));
    //printf("\n%d",checkPresenceOfZero(iNo));
    return bRet;
}

int main()
{
    int iNo = 0;

    bool bRet = false;

    bRet = checkDuck(0423);

    if(bRet ==true)
        printf("Duck\n");
    else
        printf("Not Duck\n");
    

    return 0;
}