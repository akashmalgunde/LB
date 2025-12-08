#include<stdio.h>
#include<string.h>

int main()
{
    int iRet = 0;

    char Crr[22] = "bpplication";

    char Crr1[10] = "apply";

    iRet = strcmp(Crr,Crr1);

    if(iRet == 0)
    {
        printf("Str1 and Str2 are equal\n");
    }
    else if(iRet < 0)
    {
        printf("Str2 is greater than Str1\n");
    }
    else
    {
        printf("Str1 is greater than Str2\n");
    }

    return 0;
}