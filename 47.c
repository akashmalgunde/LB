#include<stdio.h>

void main()
{
    int iNo1 = 10;
    int iNo2 = 11;

    int iRet = iNo1 > iNo2 ? iNo1 : iNo2;

    printf("%d",iRet);

}



/*

iNo1    10
iNo2    11

Cmd Prompt
11 is greater.

if(iNo1 > iNo2)
    {
        printf("%d is greater\n",iNo1);
    }
    else
    {
        printf("%d is greater\n",iNo2);
    }

condition ?  True    :  False ;

iNo1    10
iNo2    11

iNo1 > iNo2 ? iNo1 : iNo2;

Cmd Prompt
11 is greater


ternary operator
condition ? true block : false block;


*/