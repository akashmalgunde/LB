#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iValue)
{
    int iTemp = iValue;
    int iCnt = 0;
    int iSum = 0;
    iCnt = 1;

    while(iCnt <= iValue/2)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

    
}


int main()
{
    int iNo1 = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iNo1);

    bRet = CheckPerfect(iNo1);

    if(bRet == true)
    {
        printf("%d is strong number\n",iNo1);
    }
    else
    {
        printf("%d is not strong number\n",iNo1);
    }
    

    return 0;
}