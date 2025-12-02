#include<stdio.h>
#include<stdbool.h>

bool CheckSquare(int iNum)
{
    int iCnt = 0;
    int iSquare = 0;

    iCnt = 1;

    while(iNum > iSquare)
    {
        iSquare = iCnt * iCnt;
        iCnt++;
    }

    if(iNum == iSquare)
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
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:");
    scanf("%d",&iNo);

    bRet = CheckSquare(iNo);

    if(bRet == true)
    {
        printf("%d is square\n",iNo);
    }
    else
    {
        printf("%d is not a square\n",iNo);
    }

    return 0;
}


/*

    iNo     0       15

    bRet    false

    iNum    15

    iCnt    0       1       2       3       4       5

    iSquare 0       1       4       9       16



    int iCnt = 0;
    int iSquare = 0;

    iCnt = 1;

    while(iNum > iSquare)
    {
        iSquare = iCnt * iCnt;
        iCnt++;
    }

    if(iNum == iSquare)
    {
        return true;
    }
    else
    {
        return false;
    }



    cmd prompt
    Enter the number:15

    15 is not square


*/