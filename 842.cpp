#include<iostream>
using namespace std;

int countWords(char *cArr)
{
    int i = 0;
    int iCount = 0;
    while(cArr[i] != '\0')
    {
        if(cArr[i] == ' ')
            iCount++;
        i++;
    }
    return ++iCount;

}

int main()
{
    char cArr[] = "I love programming";
    int iRet = 0;

    iRet = countWords(cArr);

    cout<<"Count of word in given sentence:"<<iRet;

    return 0;
}