#include<stdio.h>
#include<stdbool.h>

bool check()
{
    return 15 % 3 == 0 ? true : false;
}

int main()
{
    
    bool bRet = check();

    if(bRet == true)
    {
        printf("it returns true\n");
    }
    else
    {
        printf("it returns false\n");;
    }

    return 0;
}