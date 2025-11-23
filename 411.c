#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool CheckPalindrome(char *ptr)
{
    bool bRet = true;

    char ptr1[50];

    strcpy(ptr1,ptr);
    int iLen = strlen(ptr);

    for(int i = 0,j = iLen- 1; j >= 0; i++,j--)
    {
        ptr1[i] = ptr[j];
    }

    int i = 0;
    while(ptr[i] != '\0')
    {
        if(ptr[i] != ptr1[i])
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
    char Str[50];
    bool bRet = false;

    printf("Enter the string:\n");
    scanf("%s",Str);

    bRet = CheckPalindrome(Str);

    if(bRet == true)
    {
        printf("%s is palindrome\n",Str);
    }
    else
    {
        printf("%s is not palindrome\n",Str);
    }



    return 0;
}