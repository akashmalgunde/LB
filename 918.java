import java.util.Scanner;

class myString
{
    String myStr;

    public myString(String s)
    {
        this.myStr = s;
    }

    void diaplayNonRepeat()
    {
        int i = 0;
        int j = 0;
        for(i = 0; i < myStr.length(); i++)
        {
            for(j = i + 1; j < myStr.length(); j++)
            {
                if(myStr.charAt(i) == myStr.charAt(j))
                {
                    break;
                }
            }

            if(j == myStr.length())
            {
                System.out.println(myStr.charAt(i));
                break;
            }
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String s = sobj.nextLine();

        myString m = new myString(s);

        m.diaplayNonRepeat();

    }
}