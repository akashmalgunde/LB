import java.util.Scanner;

class MyArray
{
    int[] iArr;
    int iSize;

    public MyArray(int iSize)
    {
        this.iSize = iSize;
        iArr = new int[iSize];
    }

    public void accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the array elements:");

        for(int i = 0; i < iArr.length; i++)
            iArr[i] = sobj.nextInt();

    }

    public void display()
    {
        //Scanner sobj = new Scanner(System.in);

        System.out.println("Entered array elements are:");

        for(int i = 0; i < iArr.length; i++)
            System.out.print(iArr[i]+" ");

        System.out.println();
    }

    int checkMaximum()
    {
        int iMax = iArr[0];

        for(int i = 1; i < iArr.length; i++)
        {
            if(iMax < iArr[i])
                iMax = iArr[i];
        }

        return iMax;
    }

    int checkMinimum()
    {
        int iMin = iArr[0];

        for(int i = 1; i < iArr.length; i++)
        {
            if(iMin > iArr[i])
                iMin = iArr[i];
        }

        return iMin;
    }

}


class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();
        m.display();

        int iRet = m.checkMaximum();
        System.out.println("Maximum element in array is:"+iRet);

        iRet = m.checkMinimum();
        System.out.println("Minimum element in array is:"+iRet);

    }
}