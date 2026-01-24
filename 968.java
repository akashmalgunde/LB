import java.util.Scanner;

class MyArray
{
    int iSize;
    int[] iArray;

    public MyArray(int iSize)
    {
        this.iSize = iSize;
        this.iArray = new int[this.iSize];
    }

    public void accept()
    {
        Scanner sobj = new Scanner(System.in);
        for(int i = 0; i < this.iArray.length; i++)
        {
            this.iArray[i] = sobj.nextInt();
        }
    }

    public void display()
    {
        for(int i = 0; i < this.iArray.length; i++)
        {
            System.out.print(this.iArray[i]+" ");
        }
        System.out.println();
    }

    boolean checkLeft(int iIndex)
    {
        int iNo = this.iArray[iIndex];
        boolean bRet = false;

        for(int i = 0; i < iIndex; i++)
        {
            if(this.iArray[i] == iNo)
            {
                bRet = true;
                break;
            }
        }

        return bRet;
    }

    public int calculateDistinct()
    {
        int iCnt = 0;
        for(int i = 0; i < this.iArray.length; i++)
        {
            if(!checkLeft(i))
                iCnt++;
        }

        return iCnt;
    }


}



class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(6);

        m.accept();
        m.display();

        System.out.println(m.calculateDistinct());
    }
}