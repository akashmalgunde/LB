#include<stdio.h>
#include<stdbool.h>

int checkmail(char *str,char ch)
{
    int i = 0;
    int iRet = 0;

    while(str[i] != 0)
    {
        if(str[i] == ch)
        {
            iRet++;
        }
        i++;
    }

    return iRet;
}

int main()
{
    char str[] = "Akashmal@gmai@@@@l.com";
    int iRet = 0;
    char ch = '@';

    iRet = checkmail(str,ch);

    printf("%d - > %c\n",iRet,ch);

    return 0;
}