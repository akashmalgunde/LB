#include<stdio.h>

int mystrlenDigit(char *Str)
{
    int i = 0;
    int iCnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= '0' && Str[i] <= '9')
            iCnt++;
        i++;
        
    }

    return iCnt;
}

int main()
{
    char Str[20];
    int iRet = 0;

    scanf("%s",Str);

    iRet = mystrlenDigit(Str);

    printf("%d \n",iRet);


    return 0;
}