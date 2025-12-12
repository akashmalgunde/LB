import java.util.Scanner;

class TestArr
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[5];

        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            System.out.print(Arr[i]+" ");


        int iNo = 0;
        System.out.println("Enter the no:");

        iNo = sobj.nextInt();

        for(int i = 0; i < Arr.length; i++)
            if(Arr[i] == iNo)
            {
                System.out.println("element is found in array at "+i);
                break;
            }


    }
}