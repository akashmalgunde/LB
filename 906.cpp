#include<iostream>
using namespace std;

int calLen(char *cPtr)
{
    int i = 0;
    while(cPtr[i] != '\0')
    {
        i++;
    }
    return i;
}

bool checkPalindrome(char *cPtr)
{
    //int iter = calLen(cPtr);
    bool bRet = true;

    for(int iIter = 1, i = 0 , j = calLen(cPtr) - 1; iIter <= calLen(cPtr) /2; iIter++)
    {
        if(cPtr[i] != cPtr[j])
        {
            bRet = false;
            break;
        }
    }

    return bRet;
}

int main()
{
    char Str[] = "level";

    bool bRet = false;

    bRet = checkPalindrome(Str);

    if(bRet == true)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}