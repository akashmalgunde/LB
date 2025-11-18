#include<stdio.h>

int main()
{
    int iSum = 0;

    for(int i = 1; i <= 10; i++)
    {
        iSum = iSum + i;
        printf("Sum upto %d is %d.\n",i,iSum);
    }

    return 0;
}
