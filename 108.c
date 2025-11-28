#include<stdio.h>
#include<stdbool.h>

bool CheckVowel()
{
    char cChar = '\0';

    printf("Enter the character:\n");
    scanf("%c",&cChar);

    if(cChar >= 'A' && cChar <= 'Z')
    {
        cChar = cChar + 32;
    }

    if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u')
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    bool bRet = false;

    bRet = CheckVowel();

    if(bRet == true)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is consonent\n");
    }

    

    return 0;
}


/*

    10 + 32 = 42
    11 + 32 = 43

*/