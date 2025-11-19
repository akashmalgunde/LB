#include<stdio.h>
#include<stdbool.h>

bool CheckSquare(int iNo)
{
    bool bRet = false;
    int i = 1;

    while(i*i < iNo)
    {
        i++;
    }
    if(i*i == iNo)
    {
        bRet = true;
    }
    return bRet;
}

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        bool bRet = false;

        bRet = CheckSquare(i);

        if(bRet == true)
        {
            printf("%d ",i);
        }

    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number:\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}