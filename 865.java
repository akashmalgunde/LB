import java.util.Scanner;

class Test
{
    
    public static void main(String args[])
    {
        int iNo = 0;
        int iArr[];

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size:");
        iNo = sobj.nextInt();

        iArr = new int[iNo];

        accept(iArr);

        display(iArr);

        displayDuplicate(iArr);

    }

    static void accept(int iBrr[])
    {
        Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < iBrr.length; i++)
        {
            iBrr[i] = sobj.nextInt();
        }
    }

    static void display(int iBrr[])
    {
        for(int i = 0; i < iBrr.length; i++)
        {
            System.out.print(iBrr[i]+" ");
        }

        System.out.println();
    }

    static void displayDuplicate(int iBrr[])
    {
        boolean bRet = false;
        for(int i = 0; i < iBrr.length - 1; i++)
        {
            bRet = false;
            for(int j = i + 1; j < iBrr.length; j++)
            {
                if(iBrr[i] == iBrr[j])
                {
                    bRet = true;
                    break;
                }
            }
            if(bRet == true)
                System.out.print(iBrr[i]+"  ");
        }
    }
}