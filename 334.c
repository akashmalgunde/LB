#include<stdio.h>

void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] == 'a' || Str[i] == 'e' || Str[i] == 'o' || Str[i] == 'u' || Str[i] == 'A' || Str[i] == 'O' || Str[i] == 'E' || Str[i] == 'I' || Str[i] == 'U')
            printf("%c\t",Str[i]);
        i++;
    }
}

int main()
{
    char Str[] = "Hello";

    Display(Str);

    return 0;
}