#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool CheckPalindrome(char *Str1)
{
    char Str2[25];

    int iLength = strlen(Str1);

    printf("%d\n",iLength);

    int i = 0;

    //for(int i = 0, j = iLength-1; j >= 0; j--,i++)
    //{
     //   Str2[i] = Str1[j];
    //}
    //Str2[i] = '\0';

    strcpy(Str2,Str1);

    printf("%s\n",Str1);
    printf("%c\n",Str2[0]);

    i = 0;
    while(Str1[i] != '\0')
    {
        if(Str1[i] != Str2[i])
            return false;
        i++;
    }

    return true;
    

}


int main()
{
    char Str1[] = "SaaS";
    bool bRet = false;

    bRet = CheckPalindrome(Str1);

    if(bRet == true)
        printf("%s is palindrome\n",Str1);

    else
        printf("%s is not palindrome\n",Str1);


    return 0;
}