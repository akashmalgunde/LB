#include<stdio.h>

char strchrX(char Crr[],char Ch)
{
    int i = 0;
    while (Crr[i] != '\0')
    {
        if(Crr[i] == Ch)
        {
            return &Crr[i];
        }
        i++;
    }

    return NULL;
    
}

int main()
{
    char Crr[15] = "Hello World";

    char Ch = 'a';

    

    char *ptr = strchrX(Crr,Ch);

    if(ptr == 0)
    {
        printf("Given character is not present in the string\n");
    }
    else
    {
        printf("Given character is present in the string\n");
    }

    return 0;
}