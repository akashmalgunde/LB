#include<stdio.h>

int CalculateConsonant(char *Str)
{
    int i = 0;
    int iCnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] != 'a' && Str[i] != 'e' && Str[i] != 'o' && Str[i] != 'u' && Str[i] != 'A' && Str[i] != 'O' && Str[i] != 'E' && Str[i] != 'I' && Str[i] != 'U')
            iCnt++;
        i++;
    }
    return iCnt;
}

int main()
{
    char Str[] = "Hello";

    int iRet = 0;

    iRet = CalculateConsonant(Str);

    printf("%s contains %d vowels\n",Str,iRet);

    return 0;
}