#include<stdio.h>
#include<stdbool.h>

bool checkPangram(char *cPtr)
{
    bool bRet = true;

    int i = 0;
    while (cPtr[i] != '\0')
    {
        /* code */
        if((cPtr[i] >='a' && cPtr[i] <= 'z') || (cPtr[i] >='A' && cPtr[i] <= 'Z') || cPtr[i] == ' ')
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
    char cStr[] = "The quick brown fox jumps over the lazy dog123";

    bool bRet = false;

    bRet = checkPangram(cStr);

    if(bRet == true)
        printf("string is pangram");
    else
        printf("string is not pangram");

    return 0;
}