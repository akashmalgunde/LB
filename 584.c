#include<stdio.h>

void mystrCountchar(char *Str,int *iCntS,int *iCntC)
{
    int i = 0;
    while(Str[i] != '\0')
    {
        if(Str[i] >= 'a' && Str[i] <= 'z')
            (*iCntS)++;
        
        else if(Str[i] >= 'A' && Str[i] <= 'Z')
            (*iCntC)++;

        i++;
    }

}

int main()
{
    char Str[20];
    //int iRet = 0;
    //char ch = '\0';
    int iCntS = 0;
    int iCntC = 0;

    printf("Enter the string:\n");
    scanf("%s",Str);

    mystrCountchar(Str,&iCntS,&iCntC);

    //printf("%d \n",iRet);
    printf("%d is count of small\n",iCntS);
    printf("%d is count of capital\n",iCntC);


    return 0;
}