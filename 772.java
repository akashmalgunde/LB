import java.util.Scanner;

class Test
{
    public static void main(String args[])
    {

        Scanner sobj = new Scanner(System.in);

        int[] Arr = new int[5];

        int[] Brr = new int[5];

        int[] Crr = new int[Arr.length + Brr.length];

        System.out.println("Enter the array elements for first array:");
        for(int i = 0; i < Arr.length; i++)
            Arr[i] = sobj.nextInt();

        System.out.println("Entered elements are:");
        for(int i = 0; i < Arr.length; i++)
            System.out.print(" "+Arr[i]);

        System.out.println();

        System.out.println("Enter the array elements for Second array:");
        for(int i = 0; i < Brr.length;i++)
            Brr[i] = sobj.nextInt();

        System.out.println("Entered array elements are:");
        for(int i = 0; i < Brr.length; i++)
            System.out.print(" "+Brr[i]);

        System.out.println();


        for(int i = 0, k = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Brr.length; j++)
            {
                if(Arr[i] > Brr[j])
                {
                    Crr[k++] = Brr[j];
                }
                else
                {
                    Crr[k++] = Arr[i];
                    break;
                }
            }
        }

        for(int i = 0; i < Arr.length + Brr.length; i++)
            System.out.print(Crr[i]+" ");

        System.out.println();


    }
}