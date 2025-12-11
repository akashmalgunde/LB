import java.util.Scanner;

class TestInput
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();
        sobj.nextLine();
        System.out.println("iNo:"+iNo);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();
        System.out.println("str:"+str);

        System.out.println("Enter double:");
        double d = sobj.nextDouble();
        System.out.println("d:"+d);
    }
}