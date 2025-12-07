#include<stdio.h>

int main()
{
    char Str[] = "akash";

    int i = 0;

    while(Str[i] != '\0')
    {
        printf("%c",Str[i] - 32);
        i++;
    }
}