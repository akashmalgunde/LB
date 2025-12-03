#include<stdio.h>

void StringToggle(char *Str,char *Dest)
{
    int i = 0;
    int iCnt = 0;

    while(Str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    printf("%d\n",iCnt);
    for(int i = 0,j = iCnt-1; j >= 0; j--,i++)
    {
        Dest[i] = Str[j];
    }
    Dest[i] = '\0';
}

int main()
{
    char Str[20];
    char Str1[20];

    printf("Enter the string:\n");
    scanf("%s",Str);

    StringToggle(Str,Str1);

    printf("%s",Str1);

    return 0;
}