#include<stdio.h>

int main()
{
    char Str[] = "Hello";

    printf("Size of Str is %d\n",sizeof(Str));

    int i = 0;

    while(Str[i] != '\0')
    {
        scanf("%c",&Str[i]);
        i++;
    }

    Str[i] = '\0';

    i = 0;

    while(Str[i] != '\0')
    {
        printf("%c",Str[i]);
        i++;
    }

    return 0;
}