#include<stdio.h>
#include<stdbool.h>

bool CheckSquare(int iNo)
{
    bool bRet = false;
    int i = 1;

    while(i*i < iNo)
    {
        i++;
    }
    if(i*i == iNo)
    {
        bRet = true;
    }
    return bRet;
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    bRet = CheckSquare(iNo);

    if(bRet == true)
    {
        printf("Given number is square\n");
    }
    else
    {
        printf("Given number is not a square\n");
    }

    return 0;
}