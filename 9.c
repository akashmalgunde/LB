#include<stdio.h>

int main()
{
    int iSquare = 0;

    for(int i = 1; i <= 10; i++)
    {
        iSquare = i * i;
        printf("%d is square of %d\n",iSquare , i);
    }

    return 0;
}