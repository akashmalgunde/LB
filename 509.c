#include<stdio.h>

void Display(int iRows)
{
    int iCnt = 1;
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(j <= i)
            {
                if(i != j)
                    printf("%d *\t",iCnt++);
                
                else
                    printf("%d  \t",iCnt++);
            }
            else
                printf("  \t");
        }
        printf("\n");
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