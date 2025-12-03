#include<stdio.h>

void StringToggle(char *Str)
{
    int i = 0;
    int iGap = 'a' - 'A';

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
            Str[i] = Str[i] - iGap;

        else if(Str[i] >= 'A' && Str[i] <= 'Z')
            Str[i] = Str[i] + iGap;

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