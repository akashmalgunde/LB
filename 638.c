#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
    bool bRet = true;

    for(int i = 2; i <= iNo /2; i++)
    {
        if(iNo % i == 0)
        {
            bRet = false;
            break;
        }
    }

    return bRet;

}
int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter no:\n");
    scanf("%d",&iNo);

    bRet = checkPrime(iNo);

    if(bRet == true)
        printf("%d is prime\n",iNo);
    else
        printf("%d is not prime\n",iNo);

    return 0;
}