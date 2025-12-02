#include<stdio.h>

int mystrlen(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char Str[20];
    int iRet = 0;

    scanf("%s",Str);

    iRet = mystrlen(Str);

    printf("%d \n",iRet);


    return 0;
}