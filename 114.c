#include<stdio.h>
#include<stdbool.h>

bool CheckCase()
{
    char ch = '\0';

    printf("enter the character:\n");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
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
   
   bRet = CheckCase();

   if(bRet == true)
   {
        printf("letter is in lowercase\n");
   }
   else
   {
        printf("letter is in uppercase\n");
   }
}


/*

        bRet    false

        ch      \0      h

        cmd prompt

        letter is in lowercase





    char ch = '\0';

    printf("enter the character:\n");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        return true;
    }
    else
    {
        return false;
    }




*/