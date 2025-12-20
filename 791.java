import java.util.Scanner;

class Pattern{
 public void Display(int iRows)
{
   int iCnt = 1;
   int iCnt1 = 1;
    for(int i = 1; i <= iRows; i++,iCnt++)
    {
        for(int j = 1; j <= iRows; j++)
        {
            if(i == j || i + j == iRows + 1)
            {
                System.out.print(iCnt1+" ");

            }
            else
            {
                System.out.printf("  ");
            }
        }
        if(iRows % 2 != 0)
            if(iCnt <= iRows / 2)
                iCnt1++;
            else
                iCnt1--;

        else if(iRows % 2 == 0)
            if(iCnt < iRows / 2 )
                iCnt1++;
            else if(iCnt > iRows / 2)
                iCnt1--;

        System.out.println("     "+iCnt1);
        System.out.println();
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
