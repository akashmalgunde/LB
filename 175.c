#include<stdio.h>

void Display()
{
    int i = 0;  //Rows
    int j = 0;  //Columns

    int iReward = 0;

    for(int iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Enter the co-ordinate:\n");
        scanf("%d%d",&i,&j);

        if(i == 2 && j == 1 || i == 1 && j == 1 || i == 2 && j == 2 || i == 3 && j == 3)
        {
            printf("You are on right track\n");
            iReward++;
        }

        if(iReward == 4)
        {
            printf("You are login successfully\n");
        }
    }
    
    
    
    
}

int main()
{

    Display();

    return 0;

}