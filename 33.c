#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iValue)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iValue)
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

    bRet = CheckPerfect(iNo);

    if(bRet == true)
    {
        printf("%d is a perfect number",iNo);
    }
    else
    {
        printf("%d is not a perfect number\n",iNo);
    }


    return 0;
}


/*

Algorithm

    Start
        Take a input from user as iNo

        iterate for loop from 1 to less than the number

            if iNo % iCnt == 0
                do the summation
        
        if original no == sum
            Display Perfect Number
        
        else 
            not perfect number
    Stop



    iNo     0   6
    bRet    false   true

    iValue  6
    iSum    0   1   3   6
    iCnt    0   1   2   3   4   5   6

    Cmd prompt




    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iValue)
    {
        return true;
    }
    else
    {
        return false;
    }



*/