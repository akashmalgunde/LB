#include<stdio.h>

int strlenX(char Str[])
{
    int i = 0;
    int iCnt = 0;
    while (Str[i] != '\0')
    {
        iCnt++;
        i++;
    }

    return iCnt;
    
}

int main()
{
    int iRet = 0;

    char Str[] = "Hello";

    iRet = strlenX(Str);

    printf("Length of string is : %d\n",iRet);

    return 0;
}