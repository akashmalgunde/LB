#include<stdio.h>

void Display(int Brr[],int *ptr1,int *ptr2)
{
    for(int i = 0; i < 5; i++)
    {
        if(Brr[i] % 2 == 0)
        {
            *ptr1 = *ptr1 + 1;
        }
        else

        {
            //printf("here:%d",*ptr2++);

            *ptr2 = *ptr2 + 1;
        }
    }

}

int main()
{
    int Arr[5];

    int iEven = 0;
    int iOdd = 0;

    printf("Enter the number:\n");


    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Entered elements are:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",Arr[i]);
    }

    Display(Arr,&iEven,&iOdd);

    printf("Even count is %d and Odd count %d\n",iEven,iOdd);



    return 0;

}


/*

            0       1       2       3       4
    Arr     10      15      20      25      30

    iEven        0123
            1000   1004

    iOdd         012
            2000    2004

    i       0       1       2       3       4       5


            0       1       2       3       4
    Brr     10      15      20      25      30
    
    
    ptr1        1000
            3000    3008
    
    ptr2        2000
            4000    4008


    for(int i = 0; i < 5; i++)
    {
        if(Brr[i] % 2 == 0)
        {
            *ptr1++;
        }
        else
        {
            *ptr2++;
        }
    }

    i       0       1       2       3       4       5


    cmd prompt

    Enter the number:
    10
    20
    30
    40
    50

    Entered elements are:
    10
    15
    20
    25
    30




*/
