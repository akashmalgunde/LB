#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 1;
    for(int i = 1; i < iRows * 2; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i <= iRows)
            {
                if( i == 3 || i - j == 0 || j - i == 2)
                {
                    printf("* ");
                }
                else 
                {
                    printf("  ");
                }
            }
            else
            {
                if(i == 3 || i - j == 2 || i - j == 4)
                {
                    printf("* ");
                }
                else 
                {
                    printf("  ");
                }
            }
            
        }
        printf("\n");
        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}