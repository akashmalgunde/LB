#include<stdio.h>

void StringToggle(char *Str,char *Dest)
{
    int i = 0;
    int iCnt = 0;

    while(Dest[iCnt] != '\0')
    {
        iCnt++;
    }
    Dest[iCnt++] = ' ';
    while(Str[i] != '\0')
    {
        Dest[iCnt] = Str[i];
        iCnt++;
        i++;
    }
   // printf("%d\n",iCnt);
   Dest[iCnt] = '\0';
}

int main()
{
    char Str[20];
    char Str1[20];

    printf("Enter the string:\n");
    scanf("%s",Str);

    printf("Enter dest:\n");
    scanf("%s",Str1);

    StringToggle(Str,Str1);

    printf("%s",Str1);

    return 0;
}