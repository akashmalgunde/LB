#include<stdio.h>

int main()
{
    char Str[] = "akAsh";

    int i = 0;

    while(Str[i] != '\0')
    {
        if(Str[i] >='A' && Str[i] <= 'Z')
        {
            printf("%c",Str[i] + 32);
        }
        else
        {
            printf("%c",Str[i]-32);
        }
        i++;
    }
}