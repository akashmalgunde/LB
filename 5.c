#include<stdio.h>

int main()
{
    int iSum = 0;

    for(int i = 1; i <= 10; i++)
    {
        iSum = iSum + i;
    }

    printf("%d\n",iSum);

    return 0;
}