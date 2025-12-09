#include<stdio.h>

int strncmpX(char Str1[],char Str2[],int n)
{
    for(int i = 0; i < n; i++)
    {
        if(Str1[i] != Str2[i])
        {
            if(Str1[i] > Str2[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;

}

int main()
{
    char Str1[] = "HEllo";

    char Str2[] = "Hello";

    int iRet = 0;

    iRet = strncmpX(Str1,Str2,2);

    if(iRet == 0)
    {
        printf("Both string are same.\n");
    }
    else
    {
        printf("Both strings are not same\n");
    }

    return 0;
}