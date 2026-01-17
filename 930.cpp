#include<iostream>
using namespace std;

void capitallize(char *ptr)
{
    int i = 0;
    while(ptr[i] != '\0')
    {

        if(ptr[i] >= 'a' && ptr[i] <= 'z')
        {
            ptr[i] = ptr[i] - 32;
        }
        i++;
    }
}

void lowerise(char *ptr)
{
    int i = 0;
    while(ptr[i] != '\0')
    {

        if(ptr[i] >= 'A' && ptr[i] <= 'Z')
        {
            ptr[i] = ptr[i] + 32;
        }
        i++;
    }
}

int main()
{
    char Str1[] = "vjhVVGVGyVHMBHHbkjbhjbgvgvGYVKJHB";

    cout<<Str1<<"\n";
    capitallize(Str1);
    cout<<Str1<<"\n";


    lowerise(Str1);
    cout<<Str1<<"\n";

    return 0;
}