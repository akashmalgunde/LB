import java.util.*;

class MyArray
{
    int iArr[];

    public MyArray(int i)
    {
        this.iArr = new int[i];
    }

    public void accept()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the array elements:");
        for(int i = 0; i < this.iArr.length; i++)
        {
            this.iArr[i] = sc.nextInt();
        }

    }
    public void display()
    {
       // Scanner sc = new Scanner(System.in);

        System.out.println("Enter the array elements:");
        for(int i = 0; i < this.iArr.length; i++)
        {
            System.out.print(this.iArr[i]+" ");
        }

        System.out.println();

    }

    public int searchSecondMax()
    {
        int iMax = 0;
        int iSecMax = 0;
        iMax = this.iArr[0];

        for(int i = 1; i < this.iArr.length; i++)
        {
            if(iMax < this.iArr[i])
            {
                iSecMax = iMax;
                iMax = this.iArr[i];
            }
            else if(iSecMax < this.iArr[i])
            {
                iSecMax = this.iArr[i];
            }
        }

        return iSecMax;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyArray m = new MyArray(5);

        m.accept();
        m.display();

        System.out.println(m.searchSecondMax());
    }
}