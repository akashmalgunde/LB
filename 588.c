#include<stdio.h>

void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(i <8)
            printf("*");
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