#include<stdio.h>

void Display(int Brr[])
{
    for(int i = 0; i < 5; i++)
    {
        if(Brr[i] % 2 == 0)
        {
            printf("%d is even\n",Brr[i]);
        }
        else
        {
            printf("%d is odd\n",Brr[i]);
        }
    }
}

int main()
{
    int Arr[5];

    int *ptr = Arr;

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

    Display(ptr);



    return 0;

}


/*



*/
