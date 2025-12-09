#include<stdio.h>

int strcmpX(char Str1[],char Str2[])
{
    int i = 0;
    while(Str1[i] != '\0' || Str2[i] != '\0')
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
        i++;
    }
    return 0;
}

int main()
{
    int iRet = 0;

    char Str1[25] = "apply";
    char Str2[25] = "application";

    iRet = strcmpX(Str1,Str2);

    if(iRet == 0)
    {
        printf("Both strings are equal\n");
    }
    else if(iRet == 1)
    {
        printf("Str1 is greater than Str2\n");
    }
    else
    {
        printf("Str2 is greater than Str1\n");
    }





    return 0;
}