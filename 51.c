#include<stdio.h>

void Swapping()
{
    int iNo1 = 5;
    int iNo2 = 3;

    iNo1 = iNo1 + iNo2;

    //  5 =   8   -   3
    iNo2 = iNo1 - iNo2;
    // 3  =     8    - 5
    iNo1 = iNo1 - iNo2;

    printf("%d\n",iNo1);
    printf("%d\n",iNo2);


}

int main()
{
    Swapping();

    return 0;
}