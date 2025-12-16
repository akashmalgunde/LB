#include<stdio.h>

void DisplayCommon(int *Arr,int *Brr)
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(Arr[i] == Brr[j])
            {
                printf("%d\t",Brr[j]);
            }
        }
    }
}

int main()
{
    int Arr[5] = {1,2,3,4,5};
    int Brr[5] = {1,6,7,3,5};

    DisplayCommon(Arr,Brr);

    return 0;
}