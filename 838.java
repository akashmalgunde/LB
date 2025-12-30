import java.util.Scanner;

class Test
{
    public static boolean checkPalindrome(int iNo)
    {
        boolean bRet = false;
        int iDigit = 0;
        int iTemp = 0;
        int iOrig = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iTemp = iTemp * 10 + iDigit;
            iNo = iNo / 10;
        }
        if(iOrig == iTemp)
            bRet = true;

        return bRet;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter the number:");
        int iNo = sobj.nextInt();

        if(Test.checkPalindrome(iNo))
            System.out.println("palindrome");
        else
            System.out.println("Not palindrome");


    }
}