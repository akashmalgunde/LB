#include<stdio.h>

void StringToggle(char *Str)
{
    int i = 0;

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
            Str[i] = Str[i] - 32;

        else if(Str[i] >= 'A' && Str[i] <= 'Z')
            Str[i] = Str[i] + 32;

        i++;
    }
}

int main()
{
    char Str[20];

    printf("Enter the string:\n");
    scanf("%s",Str);

    StringToggle(Str);

    printf("%s",Str);

    return 0;
}