import java.util.Scanner;

class MyArray
{
    int iSize;
    int iArr[];

    public MyArray(int i)
    {
        this.iSize = i;
        iArr = new int[iSize];
    }

    void accept()
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the array elements:");
        for(int i = 0; i < iArr.length; i++)
        {
            iArr[i] = s.nextInt();
        }
    }


    void display()
    {
        System.out.println("Entered  array elements are:");
        for(int i = 0; i < this.iSize; i++)
        {
            System.out.print(iArr[i]+" ");
        }
        System.out.println();
    }


    boolean checkLeft(int iElement,int iInd)
    {
        boolean bRet = false;
        if(iInd == 0)
            return false;
        for(int i = 0; i < iInd; i++)
        {
            if(this.iArr[i] == iElement)
            {
                bRet = true;
                break;
            }
        }

        return bRet;
    }

    void displayOne()
    {

        int i = 0;
        int j = 0;
        boolean bRet = false;

        for(i = 0; i < this.iSize; i++)
        {
            bRet = checkLeft(this.iArr[i], i);

            if(bRet != true)
            {
                System.err.println(iArr[i]);
            }
            //System.out.println(j);
            }
            

        }
    }

class Test
{
    public static void main(String args[])
    {
        MyArray m  = new MyArray(6);

        m.accept();

        m.display();

        m.displayOne();
    }
}