#include<stdio.h>

char* mystrcpy(char *str,char *dest)
{
    int i = 0;
    while(str[i] != '\0')
    {
        dest[i] = str[i];
        i++;

    }
    dest[i] = '\0';
}

int main()
{
    char Str1[25];

    printf("Enter the string:\n");
    scanf("%s",Str1);

    char Dest[25];

    char *ptr = mystrcpy(Str1,Dest);

    printf("%s\n",Dest);

    printf("%u\n",Dest);
    printf("%u\n",ptr);

    return 0;
}