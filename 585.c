#include<stdio.h>

void mystrCountchar(char *Str)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] == ' ')
            Str[i] = '_';

        i++;
    }

}

int main()
{
    char Str[20];
    
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Str);

    mystrCountchar(Str);

    printf("%s",Str);



    return 0;
}