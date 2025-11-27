#include<stdio.h>

void Menu()
{
    int iNo1 = 3;
    int iNo2 = 4;
    int iRet = 0;

    printf("Enter Which operation do you want to perfoem\n");
    printf("1.Addition\n");
    printf("2.Prime Check\n");
    printf("3.Palindrome check\n");
    printf("4.Positive or Negative\n");
    printf("5.Reverse Number\n");
    printf("6.Digit Sum\n");

    int input = 4;

    if(input == 1)
    {
        iRet = iNo1 + iNo2;
        printf("Sum = %d",iRet);
    }

    else if(input == 2)
    {
        printf("Prime or not\n");
    }
    else if(input == 3)
    {
        printf("Palindrome\n");
    }
    else if(input == 4)
    {
        if(iNo1 > 0 && iNo2 >> 0)
        {
            printf("%d and %d is Positive\n",iNo1,iNo2);
        }
        else if(iNo1 < 0 && iNo2 < 0)
        {
            printf("%d and %dis Negative\n",iNo1,iNo2);
        }
        else if(iNo1 == 0 && iNo2 == 0)
        {
            printf("%d and %d is zero\n",iNo1,iNo2);
        }
    }
    else if(input == 5)
    {
        printf("Sum of digit is :\n");
    }

}

int main()
{
    Menu();

    return 0;
}