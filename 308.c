#include<stdio.h>
#include<string.h>

void ReverseCase(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Str[i] = Str[i] + 32;
        }
        else if(Str[i] >= 'a' && Str[i] <= 'z')
        {
            Str[i] = Str[i] - 32;
        }
        i++;
    }
}

int main()
{
    char Str[6];

    strcpy(Str,"Ak1SH");

    ReverseCase(Str);

    printf("%s\n",Str);

    return 0;
}