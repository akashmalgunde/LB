class MyString
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    boolean checkPangram()
    {
        String s1 = null;
        s1 = this.s;
        boolean bRet = false;

        s1.toLowerCase();
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            bRet = false;
            for(int i = 0; i < s1.length(); i++)
            {
                if(ch == s1.charAt(i))
                {
                    bRet = true;
                    break;
                }
            }

            if(bRet == false)
            {
                break;
            }
        }

        return bRet;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString m = new MyString("Hello world");
        
        if(m.checkPangram())
            System.out.println("Pangram");
        else
            System.out.println("Not Pangram");


        MyString m1 = new MyString("The quick brown fox jumps over the lazy dog");
        
        if(m1.checkPangram())
            System.out.println("Pangram");
        else
            System.out.println("Not Pangram");
    }
}