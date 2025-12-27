#include<stdio.h>
#include<stdbool.h>


bool Prime(int iValue)
{
    bool bRet = true;
   // printf("Coming in prime for %d\n",iValue);
    for(int i = 2; i <= iValue/2; i++)
    {
        if(iValue % i == 0)
        {
            bRet = false;
            break;
        }
    }
    //printf("%d is for %d\n",bRet,iValue);
    return bRet;
    
}

void DisplayPrime(int iValue)
{
    bool bRet = false;
    for(int i = 2; i <= iValue; i++)
    {
       bRet = Prime(i);
       if(bRet == true)
            printf("%d\n",i);
        
    
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayPrime(iNo);

    return 0;
}