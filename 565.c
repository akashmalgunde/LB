#include<stdio.h>
#define bool int
#define true 1
#define false 0

bool checkDigit(char ch)
{
    bool bRet = false;
    if(ch >= '0' && ch <= '9')
        bRet = true;

    return bRet;
}

int main()
{
    char ch = '\0';
    bool bRet = false;


    printf("Enter the character:\n");
    scanf("%c",&ch);

    bRet = checkDigit(ch);

    if(bRet != true)
        printf("Not Digit\n");
    else
        printf("Digit\n");

    return 0;
}