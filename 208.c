#include<stdio.h>
#include<string.h>

int main()
{
    char Str[5];
    char Str1[5];
    int iRet = 0;

    scanf("%s",&Str);

    int i = 0;
    int iCnt = 0;

    while(Str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    
    int j = 0;
    for(int i = iCnt-1; i >= 0; i--,j++)
    {
        Str1[i] = Str[j];
    }

    iRet = strcmp(Str,Str1);

    if(iRet == 0)
    {
        printf("String is palindrome\n");
    }
    


    return 0;
}