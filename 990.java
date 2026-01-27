import java.util.Scanner;

class MyArray
{
    int iSize;
    int[] iArr;

    public MyArray(int i)
    {
        this.iSize = i;
        this.iArr = new int[this.iSize];
    }

    void accept()
    {
        Scanner s = new Scanner(System.in);
        System.out.println("enter the array elements:");
        for(int i = 0; i < this.iArr.length; i++)
        {
            iArr[i] = s.nextInt();
        }
    }

    void display()
    {
        System.out.println("entered elements are:");
        for(int i = 0; i < this.iArr.length; i++)
            System.out.print(this.iArr[i]+" ");
        System.out.println();
    }

    void displayAbsent()
    {
        int iFirst = this.iArr[0];
        int iLast = this.iArr[this.iArr.length - 1];
        boolean bRet = false;

        //System.out.println(iFirst);
        //System.out.println(iLast);

        for(int i = iFirst; i <= iLast; i++)
        {
            bRet = false;
            for(int j = 0; j < this.iArr.length; j++)
            {
                //System.out.println(i);
                if(i == this.iArr[j])
                {
                    bRet = true;
                    break;
                }
            }

            if(bRet == false)
                System.out.println(i);
        }
    }
}


class Test
{
    public static void main(String args[])
    {
        MyArray mobj = new MyArray(4);

        mobj.accept();

        mobj.display();

        mobj.displayAbsent();
    }
}