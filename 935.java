import java.util.Scanner;

class MyArray
{
    int iSize;
    int iArr[];

    MyArray(int iSize)
    {
        iArr = new int[iSize]; 
    }

    void accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the array elements:");
        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sobj.nextInt();
            //System.out.println("Inside the accept for loop");
        }
    }

    void display()
    {
        //Scanner sobj = new Scanner(System.in);
        //System.out.println("Entered array elements are:");
        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
            //System.out.println("Inside the display for loop");
        }
        System.out.println();
    }

    boolean checkSorted()
    {
        boolean bRet = true;
        for(int i = 1; i < this.iArr.length - 1;)
        {
            if(this.iArr[i] > iArr[i-1] && this.iArr[i] < this.iArr[i+1])
            {
                i++;
            }
            else
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(3);

        m.accept();
        m.display();

        if(m.checkSorted())
            System.out.println("Sorted");
        else
            System.out.println("Not sorted");
    }
}