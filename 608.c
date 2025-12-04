#include<stdio.h>
#include<stdbool.h>

bool mystrcmp(char *Dest,char *Src)
{
    int i = 0;
    bool bRet = true;

    while(Src[i] != '\0' || Dest[i] != '\0')
    {
        if(Dest[i] != Src[i])
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
    char Arr[25];
    char Brr[25] = "hello";

    bool bRet = false;


    printf("Enter the string:\n");
    scanf("%s",Arr);


    bRet = mystrcmp(Brr,Arr);

    bRet == true ? printf("Both strings are same\n") : printf("Both string are not same\n");

    return 0;
}