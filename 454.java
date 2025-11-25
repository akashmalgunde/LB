class Hello
{
    public static void CheckUpperLower(char ch)
    {
        if(ch >= 'a' && ch <= 'z')
            System.out.printf("%c is lowercase\n",ch);
        else
            System.out.printf("%c is uppercase\n",ch);
    }
}

class Demo
{
    public static void main(String args[])
    {
        char ch = 'A';

        Hello.CheckUpperLower(ch);
    }
}