#include<stdio.h>
#include<stdlib.h>

char* mystrrev(char *Str1,int iSize)
{
    char *ptr = (char*)malloc(sizeof(char)*iSize);
    int i = 0;
    while(Str1[i] != '\0')
    {
        i++;
    }
    int iCnt = i;

    printf("%d\n",iCnt);

    for(int j = iCnt-1,i = 0; j >= 0; j--,i++)
    {
        ptr[i] = Str1[j];
        printf("%c - %c\n",ptr[i],Str1[j]);
    }

    ptr[i] = '\0';

    return ptr;
}

int main()
{
    char Str1[10];
    char *ptr = NULL;

    printf("Enter the string:\n");
    scanf("%s",Str1);

    ptr = mystrrev(Str1,10);

    printf("%s\n",ptr);

    return 0;
}