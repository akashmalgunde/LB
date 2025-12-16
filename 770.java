import java.util.Scanner;

class Display
{
    void DisplayStars(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= i; j++)
            System.out.printf("* ");
        
        System.out.println();
    }
}
}


class Test
{
    public static void main(String[] args)
    {

        Scanner sobj = new Scanner(System.in);

        int iRows = 0;
        System.out.println("Enter the no of roes:");

        iRows = sobj.nextInt();

        Display dobj = new Display();

        dobj.DisplayStars(iRows);


    }
}