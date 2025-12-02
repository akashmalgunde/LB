#include<stdio.h>

void Swap(int *ptr1,int *ptr2)
{

    int iTemp = 0;

    
    iTemp = *ptr1;
    *ptr1 = *ptr2; // 2 pointer = assignment   lhs address in ptr1  rhs = value at address in ptr2
    *ptr2 = iTemp;

}

int main()
{
    int iNo1 = 0;

    int iNo2 = 0;

    printf("Enter first number:");
    scanf("%d",&iNo1);


    printf("Enter second number:");
    scanf("%d",&iNo2);

    printf("iNo1 : %d and iNo2 : %d before swapping\n",iNo1,iNo2);

    Swap(&iNo1,&iNo2);

    printf("iNo1 : %d and iNo2 : %d after swapping\n",iNo1,iNo2);

    return 0;
}



/*

    iNo1    0

    iNo2    0

*/