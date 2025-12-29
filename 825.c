#include<stdio.h>

int calSpace(char *sArr)
{
    int iCnt = 0;
    int i = 0;
    while(sArr[i] != '\0')
    {
        if(sArr[i] == ' ')
            iCnt++;
        i++;
    }
    return iCnt;
}

int main()
{
    char sArr[25];

    printf("Enter the array:");
    scanf("%s",sArr);

    int iRet = 0;

    iRet = calSpace(sArr);

    printf("%d ",iRet);

    return 0;
}