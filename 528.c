#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool CheckPassValid(char *ptr)
{
    bool bRet = false;
    int iUppercase = 0;
    int iLowercase = 0;
    int iNo = 0;
    int iSpecialChar = 0;

    int iLen = strlen(ptr);

    if(iLen < 8)
    {
        printf("Length should be greater than 8\n");
        return bRet;
    }

    int i = 0;
    while(ptr[i] != '\0')
    {
        if(ptr[i] >= '0' && ptr[i] <= '9')
        {
            iNo++;
        }
        else if(ptr[i] >= 'a' && ptr[i] <= 'z')
        {
            iLowercase++;
        }
        else if(ptr[i] >= 'A' && ptr[i] <= 'Z')
        {
            iUppercase++;
        }
        else
        {
            iSpecialChar++;
        }

        i++;
    }

    if(iUppercase >= 1 && iLowercase >= 1 && iNo >= 1 && iSpecialChar >= 1)
    {
        bRet = true;
    }
    
    if(iUppercase < 1)
        printf("1 Uppercase char should be there\n");
    
    else if(iLowercase < 1)
        printf("1 Lowercase char should be there\n");
    
    else if(iNo < 1)
        printf("1 Number should be there\n");
    
    else if(iSpecialChar < 1)
        printf("1 Special char should be there\n");

    return bRet;
}


int main()
{
    char Pass[127];
    bool bRet = false;

    printf("Enter the password:\n");
    scanf("%s",Pass);

    bRet = CheckPassValid(Pass);

    if(bRet == true)
    {
        printf("Pass is valid\n");
    }
    else
    {
        printf("Pass is not valid\n");
    }



    return 0;
}