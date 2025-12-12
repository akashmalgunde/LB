import java.util.Scanner;

class TestDisplay
{
    public static void main(String args[])
    {
        int iRows = 0;

        Scanner sobj = new Scanner(System.in);

        iRows = sobj.nextInt();

        int iCnt1 = iRows;
        int iCnt2 = iRows;
        //int iPrinter = 0;

        for(int i = 1; i <= iRows; i++,iCnt1--,iCnt2++)
        {
            for(int j = 1, iPrinter = 1; j <= iRows *2 -1; j++)
            {
                if(j >= iCnt1 && j <= iCnt2)
                {
                    if(j == iCnt1 || j == iCnt2)
                        System.out.print((iPrinter++)+" ");
                    else 
                    {
                        System.out.print("  ");
                        //iPrinter++;
                    }
                }
                else
                {
                    System.out.print("  ");
                }   

            }
            System.out.println();
        }
    }
}