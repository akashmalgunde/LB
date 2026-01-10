import java.util.Scanner;

class Test
{
    public static void main(String args[])
    {
        Scanner sob = new Scanner(System.in);

        String sStr = sob.nextLine();

        int iRet = 0;

        iRet = countWords(sStr);

        System.out.println(iRet);
    }

    static int countWords(String sStr)
    {
        int iCnt = 0;
        for(int i = 0; i < sStr.length(); i++)
        {
            if(sStr.charAt(i) == ' ')
                iCnt++;
        }
        iCnt++;

        return iCnt;
    }
    
}
