#include<stdio.h>

void DisplayFactor(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    DisplayFactor(iNo);

    return 0;
}

/*

Algorithm

start

    accept one number from user as iNo

    Iterate loop till that no

    during the iteration check weather the number during the iteration is factor or not

        if it is factor then display it

        if it is not factor then avoid it
    
stop

iNo     0   5

iValue  5

iCnt    0   1   2   3   4   5   6

Cmd Prompt
1
5


 for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }


*/