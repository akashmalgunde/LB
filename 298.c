#include<stdio.h>

void DisplayConsonant(char *Str)
{
    int i = 0;

    while(Str[i] != '\0')
    {
        if(Str[i] != 'a' && Str[i] != 'e' && Str[i] != 'i' && Str[i] != 'o' && Str[i] != 'u' && Str[i] != 'A' && Str[i] != 'E' && Str[i] != 'I' && Str[i] != 'O' && Str[i] != 'U')
        {
            //printf("Coming inside\n");
            printf("%c\t",Str[i]);
        }
        i++;
    }
    printf("\n");
}

int main()
{
    char Str[10] = "Akash";

    DisplayConsonant(Str);

    return 0;
}