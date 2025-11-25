class Hello
{
    public static void CheckConsonant(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u')
            System.out.printf("%c is vowel\n",ch);
        else
            System.out.printf("%c is Consonant\n",ch);
    }
}

class Demo {
        public static void main(String args[])
        {
            char ch = 'x';



            Hello.CheckConsonant(ch);

            ch = 'u';

            Hello.CheckConsonant(ch);


        }
}
