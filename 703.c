#include<stdio.h>

void CapitalizeChar(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    printf("chracter after the updation : %c\n",ch);
}

int main()
{
    char ch = '\0';

    printf("Enter the char:\n");
    scanf("%c",&ch);

    CapitalizeChar(ch);

    return 0;
}