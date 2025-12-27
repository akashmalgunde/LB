import java.util.Scanner;

class Stack
{
    int iTop;
    int iSize;
    char []Arr;

    Stack(int iSize)
    {
        this.iSize = iSize;
        Arr = new char[iSize];
        iTop = -1;

    }


    boolean isEmpty()
    {
        boolean bRet = false;
        if(this.iTop == -1)
        {
            bRet = true;
        }
        return bRet;
    }

    boolean isFull()
    {
        boolean bRet = false;
        if(this.iTop == Arr.length - 1)
            bRet = true;

        return bRet;
    }

    void push(char cElement)
    {
        if(isFull() == true)
        {
            System.out.println("Stack is overflow");
            return;
        }
        Arr[++iTop] = cElement;
    }

    char pop()
    {
        if(isEmpty() == true)
        {
            System.out.println("Stack is underflow");
            return '\0';
        }

        return Arr[iTop--];
        
    }

    char peek()
    {
        return Arr[iTop];
    }

    void Display()
    {
        if(this.isEmpty() == false)
            for(int i = 0; i <= iTop; i++)
                System.out.print(Arr[i]+" ");
        else
            System.out.println("No element is there in array");


        System.out.println();
    }

    int checkAny(int iPos)
    {
        if(iPos < 0 || iPos > iTop)
        {   
            return -1;
        }
        return Arr[iPos];
    }
    


}


class Test
{
    public static void main(String args[])
    {
        Stack s = new Stack(25);
        Scanner sobj = new Scanner(System.in);

        String sInput = sobj.nextLine();

        System.out.println(sInput);

        char x = '\0';
        char y = '\0';
        int a = 0;
        int b = 0;

        int iAns = 0;

        /*(for(int i = 0; i < sInput.length(); i++)
            System.out.print(sInput.charAt(i));*/

        char ch = '\0';
        for(int i = 0; i < sInput.length(); i++)
        {
             ch = sInput.charAt(i);

            if((int) ch >= 49 && (int)ch <= 57)
                s.push(ch);
            if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                x = s.pop();
                y = s.pop();

                if(x == '1')
                    a = 1;
                else if(x == '2')
                    a = 2;
                else if(x == '3')
                    a = 3;
                else if(x == '4')
                    a = 4;
                else if(x == '5')
                    a = 5;
                else if(x == '6')
                    a = 6;
                else if(x == '7')
                    a = 7;
                else if(x == '8')
                    a = 8;
                else if(x == '9')
                    a = 9;
                else if(x == '0')
                    a = 0;


                if(y == '1')
                    b = 1;
                else if(y == '2')
                    b = 2;
                else if(y == '3')
                    b = 3;
                else if(y == '4')
                    b = 4;
                else if(y == '5')
                    b = 5;
                else if(y == '6')
                    b = 6;
                else if(y == '7')
                    b = 7;
                else if(y == '8')
                    b = 8;
                else if(y == '9')
                    b = 9;
                else if(y == '0')
                    b = 0;

                if(ch == '+')
                    iAns = a + b;
                if(ch == '-')
                    iAns = a - b;
                if(ch == '*')
                    iAns = a * b;
                if(ch == '/')
                    iAns = a / b;

                if(iAns == 4)
                    s.push('4');

                if(iAns == 5)
                    s.push('5');

                if(iAns == 6)
                    s.push('6');
                if(iAns == 7)
                    s.push('7');

                if(iAns == 8)
                    s.push('8');

                if(iAns == 9)
                    s.push('9');

                

                System.out.println(iAns);

                //s.Display();
                
                



                
            }
            /*if(ch == ')' || ch == '}' || ch == ']')
            {
                x = s.pop();
                System.out.print(ch);
                System.out.println(x);

                if(x == '[' && ch == ']' || x == '(' && ch == ')' || x == '{' && ch == '}' )
                {
                    System.out.println("For the continue");
                    continue;
                }
                else{
                    System.out.println("Not valid");
                    break;
                }
            }

        }


        if(s.isEmpty() == true)
                System.out.println("Valid");*/

    }
    s.Display();
    }
}
