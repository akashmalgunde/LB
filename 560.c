#include<stdio.h>

int Ascii(char ch)
{
    int iRet = ch;
    return iRet;
}

int main()
{

    char ch = '\0';

    int iRet = 0;

    printf("enter the char:\n");
    scanf("%c",&ch);

    iRet = Ascii(ch);

    printf("%c ascii is : %d\n",ch,iRet);
    return 0;


}