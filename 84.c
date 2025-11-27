#include<stdio.h>

void Check()
{
    int num = 28;

    for(int i = 1; i <= num; i++)
    {
        int iSum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                iSum = iSum + j;
            }
        }
        if(iSum == i)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    Check();

    return 0;
}