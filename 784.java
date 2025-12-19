import java.util.Scanner;

class Array
{

    Scanner sobj = new Scanner(System.in);

    int iSize;
    int []Arr;

    Array(int iSize)
    {
        this.iSize = iSize;
        this.Arr = new int[iSize];
    }

    void Accept()
    {
        System.out.println("Enter the array elements:");
        for(int i = 0; i < this.Arr.length; i++)
            Arr[i] = sobj.nextInt();

    }

    void Display()
    {
        System.out.println("Entered array elements are:");
        for(int i = 0; i < this.Arr.length; i++)
            System.out.print(Arr[i]+" ");

        System.out.println();
    }

    void Add(Array aobj1,Array aobj2)
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while(i < this.iSize)
        {
            if(j < aobj1.Arr.length && k < aobj2.Arr.length)
            {
                if(aobj1.Arr[j] < aobj2.Arr[k])
            {
                //System.out.println("Coming for aobj1.Arr[j] < aobj2.Arr[k]");
                this.Arr[i] = aobj1.Arr[j];
                j++;
            }

            else if(aobj1.Arr[j] > aobj2.Arr[k])
            {
                //System.out.println("Coming for aobj1.Arr[i] > aobj2.Arr[k]");
                this.Arr[i] = aobj2.Arr[k];
                k++;
            }
            }
            else
            {
                if(aobj1.Arr.length == j)
            {
                //System.out.println("Coming for aobj1.Arr.length > j");
                this.Arr[i] = aobj2.Arr[k];
                k++;
            }
            else if(aobj2.Arr.length == k)
            {
                //System.out.println("Coming for aaobj2.Arr.length > k");
                this.Arr[i] = aobj1.Arr[j];
                j++;

            }
            }
            
            i++;
        }
    }

    void Display1()
    {
        System.out.println("Inside the Display1");
        Display2();
    }

    void Display2()
    {
        System.out.println("Inside the Diplay2");
        Display1();
    }
}

class Test
{
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        boolean bRet = false;
        int iSize = 0;

        System.out.println("Enter the no of elements:");

        iSize = sobj.nextInt();

        Array aobj = new Array(iSize);

        aobj.Accept();

        aobj.Display();

        //aobj.Display1();

        //aobj.Display2();

        System.out.println("Enter the size of an array:");
        iSize = sobj.nextInt();
        
        Array aobj2 = new Array(iSize);

        aobj2.Accept();

        aobj2.Display();

        Array aobj3 = new Array(aobj.Arr.length+aobj2.Arr.length);

        aobj3.Add(aobj,aobj2);

        aobj3.Display();

        
    }
}