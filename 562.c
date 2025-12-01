#include<stdio.h>
#define bool int
#define true 1
#define false 0

bool checkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return true;

    else 
        return false;
}

int main()
{
    char ch = '\0';
    bool bRet = false;


    printf("Enter the character:\n");
    scanf("%c",&ch);

    bRet = checkCapital(ch);

    if(bRet == true)
        printf("Capital\n");
    else
        printf("Small\n");

    return 0;
}