#include<iostream>
using namespace std;

bool checkValid(char *cPtr)
{
    int i = 0;
    bool bRet = true;
    while(cPtr[i] != '\0')
    {   
        if(cPtr[i] >= 48  && cPtr[i] <= 57)
            {
                bRet = false;
                break;
            }
        i++;
    }

    return bRet;
}

int main()
{
    char cStr[] = "HelloWorld123";
    bool bRet = false;

    bRet = checkValid(cStr);

    if(bRet == true)
        cout<<cStr<<" is Valid\n";
    else
        cout<<cStr<<" is inValid\n";

    ////cout<<int('0');
    //cout<<int('9');


    return 0;
}