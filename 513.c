#include<stdio.h>

int FindLowNo(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
        return iNo2;
    else 
        return iNo1;
}

int findGCD(int iNo1,int iNo2)
{
    int iStore = 0;
    int iLow = FindLowNo(iNo1,iNo2);
    //printf("%d\n",iGreat);
    for(int i = 2; i <= iLow/2; i++)
    {
        if(iNo1 % i == 0 && iNo2 % i == 0)
        {
            iStore = i;
            break;
        }
    }
    //return iStore;
    if(iStore == 0)
        return 1;
    else
        return iStore;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);

    iRet = findGCD(iNo1,iNo2);

    printf("%d is gcd\n",iRet);

    return 0;
}