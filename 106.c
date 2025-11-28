#include<stdio.h>

int CheckEven(int iNo)
{
    return iNo % 2 == 0 ? 1 : 0;
}

int main()
{

    int iRet = CheckEven(2);

    if(iRet == 1)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}


/*
        iRet    1

        iNo     2


        calling                      called
        OS              ->           main

        main            ->           CheckEven


        Cmd Prompt
        Even

*/