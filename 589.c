#include<stdio.h>

void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
            printf("*");
        else if(Str[i] >= 'a' && Str[i] <= 'z')
            printf("$");
        else
            printf("%c",Str[i]);
        i++;
    }

}

int main()
{
    char Str[13];

    printf("Enter the number:\n");
    scanf("%s",&Str);

    Display(Str);

    return 0;
}