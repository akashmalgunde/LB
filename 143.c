#include<stdio.h>



int main()
{

    int iNo = 10;

    printf("%d\n",iNo);   //11

    printf("%d\n",&iNo);  //622226
    

    int *ptr = NULL;

    ptr = &iNo;

    printf("%d\n",ptr);

    printf("%d\n",*ptr);

    printf("Size of ptr is : %d\n",sizeof(ptr));

    printf("%d\n",sizeof(*ptr));

    printf("%d",sizeof(iNo));

    


    return 0;
}