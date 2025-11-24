#include<stdio.h>

void Average()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;
    int iNo4 = 0;
    int iNo5 = 0;

    int iCnt = 5;

    int iAvg = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iNo1);

    printf("Enter the second number : \n");
    scanf("%d",&iNo2);

    printf("Enter the third number : \n");
    scanf("%d",&iNo3);

    printf("Enter the fourth number : \n");
    scanf("%d",&iNo4);

    printf("Enter the Fifth number : \n");
    scanf("%d",&iNo5);

    iAvg = (iNo1 + iNo2 + iNo3 + iNo4 + iNo5) / 5;
    printf("%d is Average of entered five numbers",iAvg);
}

int main()
{

    Average();

    return 0;
}