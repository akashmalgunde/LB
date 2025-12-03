#include<stdio.h>

void StringToggle(char *Str,char *Dest)
{
    int i = 0;

    while(Str[i] != '\0')
    {
        Dest[i] = Str[i];
        i++;
    }
    Dest[i] = '\0';
}

int main()
{
    char Str[20];
    char Str1[20];

    printf("Enter the string:\n");
    scanf("%s",Str);

    StringToggle(Str,Str1);

    printf("%s",Str1);

    return 0;
}