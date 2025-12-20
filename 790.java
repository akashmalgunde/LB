import java.util.Scanner;

class Pattern{
 public void Display(int iRows)
{
    for(int i = 1; i <= iRows; i++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i % 2 != 0)
            {
                if(j % 2 == 0)
                    System.out.printf("* ");
                else
                    System.out.printf("  ");
            }
            else
            {
                if(j % 2 == 0)
                    System.out.printf("  ");
                else
                    System.out.printf("* ");
            }
        }

        System.out.printf("\n");
    }
}
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRows = 0;

        System.out.println("Enter the no of rows:");

        iRows = sobj.nextInt();


        Pattern pobj = new Pattern();

        pobj.Display(iRows);

    }
} 
