#include<stdio.h>

void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        i++;
    }

    for(int j = 1; j <= i; j++)
    {
        //iDigit = iTemp % 10;

        if(j < 8)
        {
            printf("*");
        }
        else
            printf("%c",Str[j]);

        //iTemp = iTemp / 10;
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