#include<stdio.h>
#include<stdbool.h>

int mystrlen(char *Str)
{
    int i = 0;
    int iCnt = 0;
    while(Str[i] != '\0')
    {
        iCnt++;
        i++;
    }

    return iCnt;
}

bool CheckPalindrome(char *Str)
{
    int iLen = mystrlen(Str);
    bool bRet = true;

    for(int i = 0, j = iLen - 1,iTer = 0;iTer <= iLen / 2 - 1;iTer++, i++,j--)
    {
        printf("%c - %c\n",Str[i],Str[j]);
        if(Str[i] != Str[j])
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}


int main()
{
    char Str[] = "level";

    bool bRet = false;

    bRet = CheckPalindrome(Str);

    if(bRet == true)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");


    return 0;
}