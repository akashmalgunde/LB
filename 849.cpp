#include<iostream>
using namespace std;

void convert(char *cStr)
{
    int i = 0;
    while(cStr[i] != '\0')
    {
        if(cStr[i] >= 'A' && cStr[i] <= 'Z')
            cStr[i] = cStr[i] + 32;

        i++;
    }
}

int main()
{
    char cStr[] = "HeLLo";

    convert(cStr);

    cout<<cStr;

    return 0;
}