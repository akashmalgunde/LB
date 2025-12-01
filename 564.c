#include<stdio.h>
#define bool int
#define true 1
#define false 0

bool checkSmall(char ch)
{
    bool bRet = false;
    if(ch >= 'a' && ch <= 'z')
        bRet = true;

    return bRet;
}

int main()
{
    char ch = '\0';
    bool bRet = false;


    printf("Enter the character:\n");
    scanf("%c",&ch);

    bRet = checkSmall(ch);

    if(bRet != true)
        printf("Capital\n");
    else
        printf("Small\n");

    return 0;
}