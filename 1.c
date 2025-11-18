#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iRet = 0;
    iRet = iNo1 + iNo2;
    return iRet;
}

int Subtraction(int iNo1,int iNo2)
{
    int iRet = 0;
    iRet = iNo1 - iNo2;
    return iRet;
}

int Multiplication(int iNo1,int iNo2)
{
    int iRet = 0;
    iRet = iNo1 * iNo2;
    return iRet;
}

int Division
(int iNo1,int iNo2)
{
    int iRet = 0;
    iRet = iNo1 / iNo2;
    return iRet;
}

int main()
{
    int iChoice = 0;

    while(1)
    {
        printf("Enter your Choise\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");

        int iNo1 = 10;
        int iNo2 = 11;

        int iAns = 0;

        printf("Enter Your Choice:\n");
        scanf("%d",&iChoice);

        if(iChoice == 1)
        {
            iAns = Addition(iNo1,iNo2);
            printf("Addition is : %d\n",iAns);
        }

        else if(iChoice == 2)
        {
            iAns = Subtraction(iNo1,iNo2);
            printf("Subtraction is : %d\n",iAns);
        }
        else if(iChoice == 3)
        {
            iAns = Multiplication(iNo1,iNo2);
            printf("Multiplication is : %d\n",iAns);
        }
        else if(iChoice == 4)
        {
            iAns = Division(iNo1,iNo2);
            printf("Division is : %d\n",iAns);
        }
        else 
        {
            printf("***.Thank You For Using the Application.***\n");
            printf("***.Exited Successfully.***\n");
            break;
        }
        
    }
    

    return 0;
}