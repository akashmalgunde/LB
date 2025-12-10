#include<stdio.h>
#include<stdbool.h>

bool checkmail(char *str)
{
    int i = 0;
    bool bRet = false;

    while(str[i] != 0)
    {
        if(str[i] == '@')
        {
            bRet = true;
            break;
        }
        i++;
    }

    return bRet;
}

int main()
{
    char str[] = "Akashmal@gmail.com";
    bool bRet = false;

    bRet = checkmail(str);

    if(bRet == true)
        printf("yes\n");
    else
        printf("No\n");

    return 0;
}