#include<stdio.h>

void displayLarge(char *cPtr)
{
    char subarr[25];

    int i = 0;
    int iCnt = 0;

    while(cPtr[i] != '\0')
    {
        i = iCnt;
        while(cPtr[i] != ' ')
    {
        subarr[i] = cPtr[i];
        i++;
        iCnt++;
    }

    subarr[i] = '\0';

    printf("%s\n",subarr);
    }
   
}

int main()
{

    char arr[] = "I love programming a lot";

    printf("%s\n",arr);

    displayLarge(arr);

    return 0;
}