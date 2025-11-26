#include<stdio.h>

void CalculateFact()
{
    int iCnt = 0;
    int iFact = 1;

    iCnt = 1;
    while(iCnt <= 5)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    printf("%d\n",iFact);

}

int main()
{
    CalculateFact();

    return 0;
}


/*

    int iCnt = 0;
    int iFact = 1;

    iCnt = 1;
    while(iCnt <= 5)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    printf("%d\n",iFact);

    iCnt    0   1   2   3   4   5   6      
    iFact   1   1   2   6   24  120

    Cmd Prompt
    120


*/