class MyString
{
    String s;

    public MyString(String s)
    {
        this.s = s;
    }

    boolean checkLeft(int iIndex)
    {
        char ch = '\0';

        boolean bRet = false;

        ch = this.s.charAt(iIndex);

        for(int i = 0; i < iIndex; i++)
        {
            if(ch == this.s.charAt(i))
            {

                //System.out.println("Coming inside if"+ch);
                bRet = true;
                break;
            }
        }

        return bRet;
    }


    void displayCount()
    {
        int iCnt = 0;
        for(int i = 0; i < this.s.length(); i++)
        {
            iCnt = 0;
            if(checkLeft(i) == false)
            {
                //System.out.println()

                for(int j = i + 1; j < this.s.length(); j++)
            {
                if(this.s.charAt(i) == this.s.charAt(j))
                    iCnt++;

            }

            System.out.println(this.s.charAt(i)+"->"+(++iCnt));
            }

            //System.out.println(this.s.charAt(i)+"->"+iCnt);
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        MyString m = new MyString("success");

        m.displayCount();
    }
}