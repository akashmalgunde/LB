#include<stdio.h>

void Display(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
            Str[i] = Str[i] - 32;

        i++;
    }

}

int main()
{
    char Str[13];

    printf("Enter the number:\n");
    scanf("%s",&Str);

    Display(Str);

    printf("%s\n",Str);

    return 0;
}