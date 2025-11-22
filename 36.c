#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iValue)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            break;
            return false;
        }
    }
    if(iCnt == iValue)
    {
        return true;
    }
}

int main()
{
    int iNo = 0;
    int bRet = false;


    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckPrime(iNo);

    if(bRet == true)
    {
        printf("%d is prime number\n",iNo);
    }
    else
    {
        printf("%d is not a prime number\n",iNo);
    }
    return 0;
}






/*

Algorithm

Start 
    accept one number from user as iNo

    take a loop which will iterate from 2 till no less than that no

    if during loop if no get divide by iCnt
        break the loop and display number is not prime

    else 
        display that no is prime
Stop

iNo     0   5
bRet    false

iValue  5
iCnt    0   2   3   4   5

Cmd Prompt  



for(iCnt = 2; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            break;
            return false;
        }
    }


*/