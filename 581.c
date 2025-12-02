#include<stdio.h>
#define ERROR_NOTFOUND -1

int myfirstOccurance(char *Str,char ch)
{
    int i = 0;
    int iPos = ERROR_NOTFOUND;
    while(Str[i] != '\0')
    {
        if(Str[i] == ch)
        {
            iPos = i;
            break;
        }
        i++;
    }
    //printf("%d   \n",iCnt);
    return iPos;
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

    if(iRet == ERROR_NOTFOUND)
        printf("char is not there\n");
    else
        printf("%d\n",iRet);


    return 0;
}