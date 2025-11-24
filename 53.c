#include<stdio.h>

void Power()
{
    int iNum = 10;

    int iSquare = 0;
    int iCube = 0;

    iSquare = iNum * iNum;

    iCube = iNum * iNum * iNum;

    printf("Square of given number is %d and Cube is %d\n",iSquare,iCube);
}

int main()
{
    Power();

    return 0;
}