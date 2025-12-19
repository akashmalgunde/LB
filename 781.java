import java.util.*;


class BinarySearch
{
    public boolean myBinarySearch(int []Arr,int iNo)
    {
        int iStart = 0;
        int iEnd = Arr.length - 1;
        int iMid = 0;
        boolean bRet = false;

        while(iStart <= iEnd)
        {
            iMid = (iStart + iEnd) / 2;

            if(Arr[iMid] == iNo)
            {
                bRet = true;
                break;
            }

            else if(Arr[iMid] < iNo)
            {
                iStart = iMid + 1;
            }

            else if(Arr[iMid] > iNo)
            {
                iEnd = iMid - 1;
            }
        }

        return bRet;
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

        int iNo = 0;

        System.out.println("Enter the number that you want to search:");

        iNo = sobj.nextInt();

        BinarySearch bobj = new BinarySearch();

        bRet = bobj.myBinarySearch(Arr,iNo);

        if(bRet == true)
            System.out.println(iNo+" found in array");
        else
            System.out.println(iNo+" not found in array");
    }
}