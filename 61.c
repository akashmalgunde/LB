#include<stdio.h>

void CheckCase()
{
    char ch = 'Z';

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase character\n",ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is uppercase character\n",ch);
    }
    
}

int main()
{
    CheckCase();
}