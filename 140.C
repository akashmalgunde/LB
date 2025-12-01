#include<stdio.h>

void DisplayFactor(int iValue1,int iValue2)
{
    int iCnt = 0;
    int iCnt1 = 0;


    for(iCnt = iValue1; iCnt <= iValue2; iCnt++)
    {
        printf("%d:",iCnt);
        for(iCnt1 = 1; iCnt1 <= iCnt; iCnt1++)
        {
            if(iCnt % iCnt1 == 0)
            {
                printf("%d\t",iCnt1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the start:");
    scanf("%d",&iNo1);

    printf("Enter the end:");
    scanf("%d",&iNo2);

    DisplayFactor(iNo1,iNo2);


    return 0;
}