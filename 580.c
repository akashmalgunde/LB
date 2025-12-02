#include<stdio.h>

int myfirstOccurance(char *Str,char ch)
{
    int i = 0;
    int iCnt = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] == ch)
        {
            iCnt = i;
            break;
        }
        i++;
    }
    printf("%d   \n",iCnt);
    return iCnt;
}

int main()
{
    char Str[20];
    int iRet = 0;
    char ch = '\0';

    printf("Enter the string:\n");
    scanf("%s",Str);

    printf("Enter the character:\n");
    fflush(stdin);
    scanf("%c",&ch);

    iRet = myfirstOccurance(Str,ch);

    printf("%d\n",iRet);


    return 0;
}