#include<stdio.h>
#include<stdlib.h>


void MyCalculator()
{
    //For entering the choice we have taken the variable.
    int iChoise = 0;

    printf("*********************Welcome To My Calculator*********************\n");

    printf("How Can I Help You?\n");

    while(1)
    {
        printf("1.Help me in calculation\n");
        printf("2.About\n");
        printf("3.Exit\n");

        printf("Here Choose any of the service I am always here to help you\n");
        printf("Feel free to ask anything\n");

        printf("Enter your choise:");
        scanf("%d",&iChoise);

        if (iChoise == 1)
        {
            printf("For Which use you are using this application\n");
            printf("1.For the Buisness\n    ");
            printf("2.For the Education\n");
            printf("3.For the Domestic\n");
            printf("4.Exit\n");
            
            printf("Enter Your Choise:");

            scanf("%d",&iChoise);

            while(1){
            if(iChoise == 1)
            {
                //code for the buisness use
                printf("It contains the logic for the Buisness use\n");
            }

            else if(iChoise == 2)
            {
                //code for the education use
                printf("It contains the logic for the Education use\n");
            }

            else if(iChoise == 3)
            {
                //code for the Domestic use
                printf("It contains the logic for the Domestic use\n");
            }
            else
            {
                break;
            }}

        }

        else if(iChoise == 2)
        {
            printf("Hi there thanks for the your intrest in my application\n");
            printf("I appreciate you.and I am feeling prroud that I have made this application from my own and using my own idea and my own logic to increase my intrest and my problem solving skills and to promote my problem sloving ability.\n ");
            printf("Feel free to use this application and if you have any suggestion or if you want to appreciate me for this then convey me on my git which contains my contact details\n");
        }

        else if(iChoise == 3)
        {
            break;
        }

        else
        {
            printf("Enter the Valid option so that you will use my application without any problem\n");
        }
        
    }

}

int main()
{

    MyCalculator();
    
    return 0;
}