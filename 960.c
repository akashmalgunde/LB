#include<stdio.h>
#include<stdbool.h>

bool checkSquare(int iNo)
{
    int iSquare = 0;
    int i = 1;
    bool bRet = false;
    while(iSquare < iNo)
    {
        iSquare = i * i;
        i++;
    }
    //printf("%d\n",iSquare);
    if(iSquare == iNo)
        bRet = true;
    
    return bRet;
}


bool checkSunny(int iNo)
{
    return checkSquare(iNo+1);
}

int main()
{
    int iNo = 0;

    printf("enter the number:\n");
    scanf("%d",&iNo);

    if(checkSunny(iNo))
        printf("Number is sunny\n");
    else
        printf("Number is not sunny\n");

    return 0;
}