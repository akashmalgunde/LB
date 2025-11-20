#include<stdio.h>

int CheckFrequency(char *ptr)
{
    int i = 0;
    int iCnt = 0;

    while(ptr[i] != '\0')
    {
        if(ptr[i] == 'a')
            iCnt++;
        i++;
    }

    return iCnt;

}

int main()
{
    char Str[6];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%s",Str);

    iRet = CheckFrequency(Str);

    printf("%d is count\n",iRet);



    return 0;
}