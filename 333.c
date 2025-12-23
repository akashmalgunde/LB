#include<stdio.h>
#include<stdbool.h>


void Display(int *Arr,int iSize)
{
    if(iSize == 0)
    {
        printf("There is no element is there in an array\n");
        return;
    }
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

bool Search(int *Arr,int iSize,int iSearch)
{
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == iSearch)
        {
            bRet = true;
            break;
        }
    }
    return bRet;
}

void Insert(int *Arr,int *iCnt)
{
    printf("Enter the element:\n");
    scanf("%d",&Arr[*iCnt]);
    *iCnt = (*iCnt) + 1;
}

bool Update(int *Arr,int iSize,int iNo,int iNew)
{
    bool bRet = false;
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            Arr[i] = iNew;
            bRet = true;
            break;
        }
    }
    return bRet;
}

void Delete(int *Arr,int *iCnt)
{
    Arr[*iCnt] = 0;
    *iCnt = *iCnt - 1;
}

void DeleteA(int *Arr,int *iCnt,int iIndex)
{
    if(iIndex > *iCnt)
    {
        return;
    }
    for(int i = 0; i < *iCnt; i++)
    {
        if(iIndex == i)
        {
            while(i < (*iCnt) - 1)
            {
                Arr[i] = Arr[i+1];
                i++;
            }

        }
    }
    *iCnt = *iCnt - 1;
}


int main()
{

    //int iSize = 0;

    //printf("Enter the size of array:\n");
   // scanf("%d",&iSize);

    int Arr[100];
    int iCnt = 0;
    int iCh = 0;

    while(1)
    {
        printf("1.Display the Array\n");
        printf("2.Search the element\n");
        printf("3.Insert the ekement\n");
        printf("4.update the element\n");
        printf("5.Delete the element\n");
        printf("6.Exit\n");

        printf("Enter your choise:\n");
        scanf("%d",&iCh);

        switch(iCh)
        {
            case 1:
                Display(Arr,iCnt);
                break;

            case 2 : 
                

                printf("Enter the number:\n");
                bool bRet = false;
                int iNo = 0;
                scanf("%d",&iNo);

                bRet = Search(Arr,iCnt,iNo);

                if(bRet == true)
                {
                    printf("%d is present in the array\n",iNo);
                }
                else
                {
                    printf("%d is not present in the array\n",iNo);
                }
                break;

            case 3:
                Insert(Arr,&iCnt);
                break;

            case 4:
                printf("Enter the data that you want to update:\n");
                iNo = 0;
                int iNew = 0;
                bRet = false;

                printf("Enter the number:\n");
                scanf("%d",&iNo);

                printf("Enter the new data:\n");
                scanf("%d",&iNew);

                bRet = Update(Arr,iCnt,iNo,iNew);

                bRet == true ? printf("Updation done Successfully\n") : printf("There is no such data for the updation\n");

                break;

            case 5:
                printf("Which element do you want to delete\n");
                printf("1.Normal\n");
                printf("2.Index that you want\n");
                printf("Enter your choise:\n");

                scanf("%d",&iCh);

                if(iCh == 1)
                {
                    Delete(Arr,&iCnt);
                break;
                }
                else if(iCh == 2)
                {
                    int i = 0;
                    printf("Enter the index that you want to delete:\n");
                    scanf("%d",&i);

                    DeleteA(Arr,&iCnt,i);
                }
                else
                {
                    printf("Invald choise!!!\n");

                }
                break;

            case 6:
                return 0;
            
            default:
                printf("Invalid choise!!\n");

        }


    }
    return 0;
}