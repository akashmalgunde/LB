#include<iostream>
using namespace std;

class MyString
{
    public:
    char * cPtr;

    MyString(char * cp)
    {
        this->cPtr = cp;
    }

    int countWords()
    {
        int iCnt = 0;
        int i = 0;
        while(cPtr[i] != '\0')
        {
            if(cPtr[i] == ' ')
                iCnt++;
            i++;
        }

        return ++iCnt;
    }
};


int main()
{
    MyString m("I love coding");

    cout<<m.countWords()<<"\n";

    return 0;
}