#include<stdio.h>
#include<string.h>

struct Fan
{
    char Company[50];
    int iBlade;
    int iWarnty;
    int iGaraunty;
    int iSpeed;
};

int main()
{
    struct  Fan  F1;

    strcpy(F1.Company,"Samsung");
    F1.iBlade = 3;
    F1.iWarnty = 2;
    F1.iGaraunty = 1;
    F1.iSpeed = 8;

    printf("%d\n",F1.iBlade);
    printf("%s\n",F1.Company);
    printf("%d\n",F1.iGaraunty);
    printf("%d\n",F1.iSpeed);


    struct  Fan  F2;

    strcpy(F2.Company,"Crown");
    F2.iBlade = 4;
    F2.iWarnty = 2;
    F2.iGaraunty = 1;
    F2.iSpeed = 5;

    printf("%d\n",F2.iBlade);
    printf("%s\n",F2.Company);
    printf("%d\n",F2.iGaraunty);
    printf("%d\n",F2.iSpeed);

    if(F1.iSpeed > F2.iSpeed)
    {
        printf("%s\n has greater advantage",F1.Company);
    }
    
    
}