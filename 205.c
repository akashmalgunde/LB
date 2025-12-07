#include<stdio.h>

int CalculateSize(char Brr[])
{
    int i = 0;
    int iCnt = 0;

    while(Brr[i] != '\0')
    {
        iCnt++;
        i++;
    }

    return iCnt;
}

int CalculateWords(char Brr[])
{
    int i = 0;
    int iCnt = 0;

    while(Brr[i] != '\0')
    {
        if(Brr[i] == ' ')
        {
            iCnt++;
        }
        i++;
    }
    iCnt++;

    return iCnt;
}

int main()
{

    char Arr[25];

    int iRet = 0;

    char ch = '\0';

    scanf("%c",&ch);

    int i = 0;

    while(ch != '\n')
    {
        Arr[i] = ch;

        scanf("%c",&ch);

        i++;
    }
    Arr[i] = '\0';

    printf("%s\n",Arr);

    iRet = CalculateSize(Arr);

    printf("%d is size of the array\n",iRet);

    iRet = CalculateWords(Arr);

    printf("%d is the count of the words\n",iRet);

    return 0;
}