import java.util.*;


class Frequency
{
    int CountOccurance(int []Arr,int iElement,int iIndex)
    {
        int iCnt = 0;
        for(int i = iIndex; i < Arr.length; i++)
        {
            if(iElement == Arr[i])
                iCnt++;
        }

        return iCnt;
    }
}

class Occurance
{
    public boolean checkExistance(int []Arr,int iPos)
    {
        boolean bRet = false;
        for(int i = 0; i < iPos; i++)
        {
            if(Arr[iPos] == Arr[i])
            {
                bRet = true;
                break;
            }

        }

        return bRet;
    }
}

class Display
{
    void Iterate(int []Arr)
    {
        int iRet = 0;
        boolean bRet = false;
        Frequency fobj = new Frequency();
        Occurance obj = new Occurance();
        for(int i = 0; i < Arr.length; i++)
        {
            bRet = obj.checkExistance(Arr,i);
            if(bRet == false)
            {  
                iRet = fobj.CountOccurance(Arr, Arr[i],i);
                System.out.println("Arr["+Arr[i]+"]->"+iRet);
            }

        }
    }
}

class Test
{
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        
        int iSize = 0;

        boolean bRet = false;

        System.out.println("Enter the no of elements:");

        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the array elements:");
        for(int i = 0; i < iSize; i++)
            Arr[i] = sobj.nextInt();

        System.out.println("Entered array elements are:");
        for(int i = 0; i < Arr.length; i++)
            System.out.println(Arr[i]+" ");

        Display dobj = new Display();

        dobj.Iterate(Arr);

        
    }
}