#include<stdio.h>
#include<stdlib.h>

void accept(char *cArr)
{
    char ch = '\0';
    int i = 0;
    printf("Enter the string:\n");
    fflush(stdin);
    //ch = scanf("%c",&ch);
    //printf("%c\n",ch);
    scanf("%c",&ch);
    while(ch != '\n')
    {
        printf("%c ",ch);
        cArr[i++] = ch;
        scanf("%c",&ch);
        //printf("%c\n",ch);
        //printf("inside loop\n");
    }
    cArr[i] = '\0';
    printf("loop break\n");
}

void replaceSpace(char *cptr)
{
    int i = 0;
    while(cptr[i] != '\0')
    {
        if(cptr[i] == ' ')
            cptr[i] = '_';
        i++;
    }
}

void display(char *cptr)
{
    printf("%s\n",cptr);
}

int main()
{

    int iSize = 0;

    iSize = 25;

    char *cArr = malloc(sizeof(char) * iSize);

    printf("%s\n",cArr);

    accept(cArr);

    display(cArr);

    replaceSpace(cArr);

    display(cArr);

    return 0;
}