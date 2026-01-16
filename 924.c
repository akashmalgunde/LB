#include<stdio.h>
#include<stdbool.h>

bool checkValid(char *ptr)
{
    bool bRet = true;

    int i = 0;
    while(ptr[i] != '\0')
    {
        if(ptr[i] >= '0' && ptr[i] <= '9')
        {
            i++;
        }
        else 
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int main()
{

    char Str[] = "12345a";
    bool bRet = false;

    bRet = checkValid(Str);

    if(bRet == true)
    {
        printf("Entered string is valid\n");
    }
    else
    {
        printf("Entered string is invalid\n");
    }

    return 0;
}