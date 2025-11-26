#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 0;
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                if(j % 2 == 0)
                {  
                    /* code */
                    printf("%d ",1);
                }
                else
                {
                    printf("%d ",0);
                }
                
            }
            else
                {
                if(j % 2 == 0)
                    printf("%d ",0);
                else
                    printf("%d ",1);
            }
            
        }
        printf("\n");
    }
}


int main()
{
    int iRows = 0;

    printf("Enter the number of rows:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}