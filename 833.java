class MyQueue
{
    int iFront;
    int iRare;
    int Arr[];
    int iSize;

    public MyQueue(int iSize)
    {
        this.iSize = iSize;
        Arr = new int[iSize];
        this.iFront = -1;
        this.iRare = -1;
    }
boolean isEmpty()
{
    boolean bRet = false;

    if(this.iFront == -1 && this.iRare == -1)
        bRet = true;

    return bRet;
}

boolean isFull()
{
    boolean bRet = false;

    if(iFront == 0 && iRare == this.Arr.length-1 || iRare == iFront - 1)
        bRet = true;

    return bRet;
}

void enQueue(int iElement)
{
    if(!isFull())
    {
        if(this.iRare == -1 && this.iFront == -1)
    {
        this.iFront++;
        this.iRare++;
    }
    else if(this.iRare == this.Arr.length - 1)
        this.iRare = 0;
    else
    {
        this.iRare++;
    }
    this.Arr[iRare] = iElement;
    }
    
}

int deQueue()
{
    int iElement = 0;
    if(!isEmpty())
    {
    iElement = Arr[iFront];

    if(iFront == iRare)
    {
        this.iFront = -1;
        this.iRare = -1;
    }
    else if(this.iFront == this.Arr.length-1)
        this.iFront = 0;
    else
        this.iFront++;

    
    }
    return iElement;
}

void Display()
{
    int i = this.iFront;
    while(i <= this.iRare)
    {
        System.out.print(this.Arr[i]+" ");

        if (i == this.Arr.length - 1)
        {
            i = 0;
        }
        else
            i++;
    }
    
}

}


class Test
{
    public static void main(String args[])
    {
        MyQueue qobj = new MyQueue(5);

        qobj.enQueue(10);
        qobj.enQueue(20);
        qobj.enQueue(30);
        qobj.Display();
        qobj.deQueue();
        qobj.Display();
    }
}