#include<stdio.h>
#include<stdlib.h>

char* removeSpecialChar(char *cptr)
{
    char *cRet = malloc(sizeof(char)*(25));

    int i = 0;
    int j = 0;
    while(cptr[i] != '\0')
    {
        if(cptr[i] >= 32 && cptr[i] <= 47 || cptr[i] >= 91 && cptr[i] <= 96 || cptr[i] >= 123 && cptr[i] <= 126)
        {
            i++;
            //printf("%c in if",cptr[i]);
        }
        else
        {
            //printf("%c in else",cptr[i]);
            cRet[j++] = cptr[i++];
        }
        i++;
    }

    cRet[j] = '\0';



    return cRet;
}

int main()
{
    char cptr[] = "a@b#c$1615615!";

    char *newPtr = NULL;

    newPtr = removeSpecialChar(cptr);

    printf("%s\n",newPtr);

    return 0;
}