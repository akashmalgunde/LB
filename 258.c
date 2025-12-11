#include<stdio.h>

void AcceptString(char *Str)
{
    printf("Enter the string:\n");
    scanf("%s",Str);
}

void DisplayPattern(char Ch)
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            printf("%c\t",Ch);
        }
        printf("\n");
    }
}

void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        DisplayPattern(Str[i]);
        i++;
    }
}

int main()
{
    char Str[50];

    AcceptString(Str);

    printf("%s\n",Str);

    Display(Str);

    return 0;
}