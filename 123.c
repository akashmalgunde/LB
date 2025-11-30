#include<stdio.h>

int Roundof(double dNo)
{
    

    dNo = dNo + 0.5;

    int iNo = dNo;

    return iNo;
}

int main()
{
    double dNo = 0.0;
    int iRet = 0;

    printf("Enter the value:\n");
    scanf("%lf",&dNo);

    iRet = Roundof(dNo);

    printf("Before roundoff was %lf Value after round off is : %d",dNo,iRet);
}


/*

    dNo     0.0f    515.985
    iRet    0       516


    dNo     515.985     516.485
    iNo     0       516

    cmd prompt
    before round off was 5.15.985 value after round off is : 516

*/