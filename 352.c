#include<stdio.h>

int main()
{
    char Str[] = "Hello";

    char Str1[10] = "Hello";
    
    char str2[] = {'h','e','l','l','o','\0'};

    int i = 0;

    while(Str[i] != '\0')
    {
        printf("%c",Str[i]);
        i++;
    }

    return 0;
}