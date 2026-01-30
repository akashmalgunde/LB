import java.util.Scanner;

class MyArray
{
    int iSize;
    int[] iArr;

    public MyArray(int iSize)
    {
        this.iSize = iSize;
        this.iArr = new int[this.iSize];

    }

    void accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter array elements:");
        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sobj.nextInt();
        }
    }

    void display()
    {
        System.out.println("Entred array elements are:\n");
        for(int i = 0; i < this.iSize; i++)
        {
            System.out.print(this.iArr[i]+"  ");
        }
        System.out.println();
    }

    int calculateD(int iNo1,int iNo2)
    {
        if(iNo1 > iNo2)
            return iNo1 - iNo2;
         else
            return iNo2 - iNo1;
    }

    int calDifference()
    {
        int iDiff = 0;
        int iMin = 0;
        iDiff = 0;

        iMin = calculateD(this.iArr[0],this.iArr[1]);


        for(int i = 0; i < this.iArr.length-1; i++)
        {
            for(int j = i + 1; j < this.iArr.length; j++)
            {
                iDiff = calculateD(this.iArr[i],this.iArr[j]);
                if(iMin > iDiff)
                {
                    iMin = iDiff;
                    if(iMin == 0)
                        return iMin;
                }
            }
        }

        return iMin;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(4);

        m.accept();
        m.display();

        System.out.println(m.calDifference());
    }
}