#include<stdio.h>

int main()
{
    int iNo = 13;

    int i = 2;

    int iFlag = 0;

    while(i <= iNo/2)
    {
        if(iNo % i == 0)
        {
            iFlag = 1;
            break;
        }

        i++;
    }

    if(iFlag == 1)
    {
        printf("%d is not prime\n",iNo);
    }
    else
    {
        printf("%d is prime\n",iNo);
    }

    return 0;
}