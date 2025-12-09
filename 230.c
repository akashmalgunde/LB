#include<stdio.h>

int isValidPassword(char Str[])
{
    int i = 0;
    int iLen = 0;
    int iUpp = 0;
    int iDigit = 0;
    int iSpecialChar = 0;
    while(Str[i] != '\0')
    {

        if(Str[i] >= 'A'  && Str[i] <= 'Z')
        {
            iUpp++;
        }

        else if(Str[i] >= 0 && Str[i] <= 9)
        {
            iDigit++;
        }

        else if(Str[i] >= 32 && 47 >= Str[i] || Str[i] >= 58 && Str[i] <= 64 || Str[i] >= 91 && Str[i] <= 96 || Str[i] >= 123 && Str[i] <= 126)
        {
            printf("%c",Str[i]);
            iSpecialChar++;
        }


        iLen++;

        i++;
    }

    printf("%d -> len \t and %d -> iUpp \t and %d -> iSpecial char \t %d -> digit \n",iLen,iUpp,iSpecialChar,iDigit);

    if(iLen >= 5 && iUpp >= 1 && /*iDigit == 1 &&*/ iSpecialChar == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iRet = 0;

    char Str[] = "fbs@Pass123";

    iRet = isValidPassword(Str);

    if(iRet == 1)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Not Valid\n");
    }

    return 0;
}