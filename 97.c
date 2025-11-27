#include<stdio.h>

int CalculateArea()
{
    int iNum = 10;

    int iSquare = 0;
    int iCube = 0;

    iSquare = iNum * iNum;

    iCube = iNum * iNum * iNum;

    return iSquare;

}

int main()
{
    int iRet = 0;

    iRet = CalculateArea();

    printf("Area is : %d",iRet);

    return 0;
}