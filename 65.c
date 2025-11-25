#include<stdio.h>

void CheckGreater()
{
    int iNo1 = 140;
    int iNo2 = 2000;
    int iNo3 = 3000;

    if(iNo1 > iNo2)
    {
        if(iNo1 > iNo3)
        {
            printf("%d is greater among three numbers\n",iNo1);
        }
    }
    else
    {
        if(iNo2 > iNo3)
        {
            if(iNo2 > iNo1)
            {
                printf("%d is greater among three numbers\n",iNo2);
            }
        }
        else
        {
            if(iNo3 > iNo1)
            {
                if(iNo3 > iNo2 )
                {
                    printf("%d is greater among three numbers\n",iNo3);
                }
            }
        }
    }
}
int main()
{
    CheckGreater();
    
    return 0;
}
    
    
/*

    int iNo1 = 140;
    int iNo2 = 2000;
    int iNo3 = 3000;

    if(iNo1 > iNo2)
    {
        if(iNo1 > iNo3)
        {
            printf("%d is greater among three numbers\n",iNo1);
        }
    }
    else
    {
        if(iNo2 > iNo3)
        {
            if(iNo2 > iNo1)
            {
                printf("%d is greater among three numbers\n",iNo2);
            }
        }
        else
        {
            if(iNo3 > iNo1)
            {
                if(iNo3 > iNo2 )
                {
                    printf("%d is greater among three numbers\n",iNo3);
                }
            }
        }
    }
    iNo1    140
    iNo2    2000
    iNo3    3000

    Cmd Prompt
    3000 is greater among three numbers


*/