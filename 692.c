#include<stdio.h>
#include<stdbool.h>

int checkmail(char *str)
{
    int i = 0;
    int iRet = 0;

    while(str[i] != 0)
    {
        if(str[i] == '@')
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

    iRet = checkmail(str);

    printf("%d - > @\n",iRet);

    return 0;
}