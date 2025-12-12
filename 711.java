import java.util.Scanner;

class TestArray
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size:");
        int iSize = 0;

        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");

        System.out.println();


    }
}