#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char Brr[],char Crr[])
{
    int i = 0;
    bool bRet = true;
    
    while(Brr[i] != '\0')
    {
        if(Brr[i] != Crr[i])
        {
            bRet = false;
            break;

        }
        i++;
    }
    return bRet;
    
}

int main()
{
    char Arr[] = "Hello";

    char Drr[] = "Hell";


    bool bRet = false;

    bRet = CheckPalindrome(Arr,Drr);

    if(bRet == true)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome\n");
    }




    return 0;
}