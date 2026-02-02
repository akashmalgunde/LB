class MyString
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    char checkNonRepeating()
    {
        char ch = '\0';
        boolean bFlag = false;
        for(int i = 0; i < this.s.length()-1; i++)
        {
            bFlag = false;
            for(int j = i + 1; j < this.s.length(); j++)
            {
                if(this.s.charAt(i) == this.s.charAt(j))
                {
                    bFlag = true;
                }
            }

            if(bFlag == false)
                return this.s.charAt(i);
        }
        return ch;
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString m = new MyString("swiss");

        char ch = '\0';

        ch = m.checkNonRepeating();

        if(ch != '\0')
            System.out.println(ch);
        else
            System.out.println("no non repaeated char is there");
    }
}