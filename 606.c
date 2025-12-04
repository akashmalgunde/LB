#include<stdio.h>

char* mystrcpy(char *Dest,char *Src,int iLen)
{
    int i = 0;

    while(Src[i] != '\0' && i < iLen)
    {
        Dest[i] = Src[i];
        i++;
    }
    Dest[i] = '\0';

    return Dest;
}

int main()
{
    char Arr[25];
    char Brr[25];

    char *ptr = NULL;

    int iLen = 0;


    printf("Enter the string:\n");
    scanf("%s",Arr);

    printf("How many character do you want to copy:\n");
    scanf("%d",&iLen);

    ptr = mystrcpy(Brr,Arr,iLen);

    printf("%s\n",ptr);

    return 0;
}