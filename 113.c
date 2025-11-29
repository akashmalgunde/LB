#include<stdio.h>
#include<stdbool.h>


bool CheckAutographic(int iValue1)
{
    int iSquare = 0;
    int iCnt = 0;
    int iCnt1 = 0;
    int iDigit = 0;
    int iTemp = iValue1;
    int iTen = 1;

    iSquare = iValue1 * iValue1;

    while(iTemp != 0)
    {
        iCnt++;
        iTemp = iTemp / 10;
    }

    for(iCnt1 = 1; iCnt1 <= iCnt; iCnt1++)
    {
        iTen = iTen * 10;
    }

    iDigit = iSquare % iTen;

    if(iDigit == iValue1)
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

    printf("Enter the number:\n");
    scanf("%d",&iNo);


    bRet = CheckAutographic(iNo);

    if(bRet == true)
    {
        printf("%d is autographic number\n",iNo);
    }
    else
    {
        printf("%d is not autographic number\n",iNo);
    }

    return 0;
}



/*

    autographic number:

    5**2 = 25


    iNo     0
    bRet    false


    iSquare     0   25
    iCnt    0   1   2

    iCnt1   0   1   2
    iDigit  0   5

    iTemp   5   0
    iTen    1   10



    int iSquare = 0;
    int iCnt = 0;
    int iCnt1 = 0;
    int iDigit = 0;
    int iTemp = iValue1;
    int iTen = 1;

    iSquare = iValue1 * iValue1;

    while(iTemp != 0)
    {
        iCnt++;
        iTemp = iTemp / 10;
    }

    for(iCnt1 = 1; iCnt1 <= iCnt; iCnt++)
    {
        iTen = iTen * 10;
    }

    iDigit = iSquare % iTen;

    if(iDigit == iValue1)
    {
        return true;
    }
    else
    {
        return false;
    }



*/