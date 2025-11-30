#include<stdio.h>
#include<stdbool.h>




int main()
{

    int iNo = 0;
    bool bRet;


    printf("Enter the number:");
    scanf("%d",&iNo);

    if(bRet == true)
    {
        printf("%d is armstrong number\n",iNo);
    }
    else
    {
        printf("%d is armstrong number\n",iNo);
    }




    return 0;
}


/*

    Accept one number from user 

    firstly count the digit in number

    take each digit according to the count take power

    after taking power add each digits power

    then compare sum and original number if both are same then it is armstrong otherwise not amstrong


*/