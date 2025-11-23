/*\
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/
#include<stdio.h>
void Display(int iRows)
{
    int iCnt1 = iRows;
    int iCnt2 = iRows;
    int iNum = 0;
    int iprint = 0;
    for(int i = 1; i <= iRows; i++)
    {
        //iNum = 1;
        iprint = 1;
        for(int j = 1; j < iRows*2; j++)
        {
            if(j >= iCnt1 && j <= iCnt2)
            {
                if(i % 2 != 0)
                {
                    if(j % 2 != 0)
                        printf("%d ",iprint++);
                    else
                        printf("  ");
                }
                else
                {
                    if(j % 2 == 0)
                        printf("%d ",iprint++);
                    else
                        printf("  ");
                }

            }
                
            else
                printf("  ");
        }
        printf("\n");
        iCnt1--;
        iCnt2++;
    }
}

int main()
{
    int iRows = 0;

    printf("Enter no of row:\n");
    scanf("%d",&iRows);

    Display(iRows);

    return 0;
}