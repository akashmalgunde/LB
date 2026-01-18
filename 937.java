import java.util.Scanner;

class MyString
{
    String str;

    public MyString(String s)
    {
        this.str = s;
    }

    void myLower()
    {
        char[] myArr = str.toCharArray();
        for(int i = 0; i < myArr.length; i++)
        {
            if(myArr[i] >= 'a' && myArr[i] <= 'z') 
                myArr[i] = (char)(myArr[i] - 32);
        }

        this.str = new String(myArr);
    }
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string:");
        str = sobj.nextLine();

        MyString ms = new MyString(str);

        ms.myLower();

        System.out.println(ms.str);

    }
}