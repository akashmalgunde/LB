#include<stdio.h>

int main()
{
    int iNo = 10;
    int iCube = 0;

    for(int i = 1; i <= iNo; i++)
    {
        iCube = i * i * i;
        printf("%d is cube of %d\n",iCube,i);
    }


    return 0;
}