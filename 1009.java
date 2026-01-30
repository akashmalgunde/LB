class MyString
{
    String str1;
    String str2;

    MyString(String s1,String s2)
    {
        this.str1 = s1;
        this.str2 = s2;
    }

    char[] convertToSmall(String s1)
    {
        char[] cStr = null;

        cStr = s1.toCharArray();

        for(int i = 0; i < s1.length(); i++)
        {
            if(s1.charAt(i) >= 'A' && s1.charAt(i) <= 'Z')
                cStr[i] = (char)(cStr[i] + 32);

        }

        return cStr;
    }



    boolean checkEquality()
    {
        boolean bRet = true;

        char[] c1 = convertToSmall(str1);
        char[] c2 = convertToSmall(str2);

       // System.out.println(c1);
        //System.out.println(c2);

        if(c1.length == c2.length)
        {
            for(int i = 0; i < c1.length; i++)
            {
                if(c1[i] != c2[i])
                {
                    bRet = false;
                    break;
                }
            }
        }
        else
            bRet = false;

        return bRet;

    }
}


class Test
{
    public static void main(String args[])
    {
        MyString m1 = new MyString("Hello","helllo");

        if(m1.checkEquality())
            System.out.println("Equal");
        else
            System.out.println("Not Equal");
    }
}