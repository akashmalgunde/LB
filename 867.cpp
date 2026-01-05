#include<iostream>
using namespace std;


int main()
{
    char cStr1[] = "I Love CPP";

    char cStr2[25];

    int i = 0;
    int j = 0;
    while(cStr1[i] != '\0')
    {
        if(cStr1[i] != ' ')
        {
            cStr2[j++] = cStr1[i];
        }
        i++;
    }

    cStr2[j] = '\0';

    cout<<cStr2;

    return 0;
}