#include<stdio.h>

int mystrlenSmall(char *Str)
{
    int i = 0;
    int iCnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
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

    iRet = mystrlenSmall(Str);

    printf("%d \n",iRet);


    return 0;
}