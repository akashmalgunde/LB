#include<stdio.h>

int mystrlenVowels(char *Str)
{
    int i = 0;
    int iCnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] == 'a' || Str[i] == 'e' || Str[i] == 'i' || Str[i] == 'o' || Str[i] == 'u' || Str[i] == 'A' || Str[i] == 'E' || Str[i] == 'O' || Str[i] == 'U')
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

    iRet = mystrlenVowels(Str);

    printf("%d \n",iRet);


    return 0;
}