#include<stdio.h>
#include<stdbool.h>

void DisplayPrime(int iNo)
{
    bool bRet = true;
    for(int j = 2; j <= iNo;j++)
    {
        bRet = true;
        for(int i = 2; i <= j /2; i++)
    {
        if(j % i == 0)
        {
            bRet = false;
            break;
        }
    }
        if(bRet == true)
            printf("%d\n",j);
    }




}
int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter no:\n");
    scanf("%d",&iNo);

    DisplayPrime(iNo);

    return 0;
}