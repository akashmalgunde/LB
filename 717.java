import java.util.Scanner;

class TestArr
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size:");
        int iSize = 0;

        int iSum = 0;

        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        System.out.println();

        for(int i = 0; i < Arr.length; i++)
            if(Arr[i] % 2 == 0)
            {
                for(int j = 1; j <= 10; j++)
                    System.out.println(j*Arr[i]);
            }


    }

    void Display(int iNo)
    {
        
    }
}