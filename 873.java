class Test
{
    public static void main(String args[])
    {
        String Str = "Hello";

        int iCount = 0;
        char ch = '\0';

        for(int i = 0; i < Str.length(); i++)
        {
            ch = Str.charAt(i);

            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
                iCount++;
        }

        System.out.println(iCount);
    }
}