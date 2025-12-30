class QueuePat
{
    int iFront;
    int iRare;
    String[] sArr;
    int iSize;

    public QueuePat(int iSize)
    {
        this.iSize = iSize;
        sArr = new String[iSize];
        iFront = -1;
        iRare = -1;
    }
    
    boolean isFull()
    {
    	boolean bRet = false;
    	if(iFront == 0 && iRare == sArr.length-1 || iFront - 1 == iRare)
    	{
    		bRet = true;
    	}
    	return bRet;
    }
    
    boolean isEmpty()
    {
    	boolean bRet = false;
    	if(iFront == -1 && iRare == -1)
    	{
    		bRet = true;
    	}
    	return bRet;
    }

    void addPatient(String s)
    {
        if(iFront == -1 && iRare == -1)
        {
            iFront++;
            iRare++;
        }
        else if(iRare == sArr.length-1)
            iRare = 0;
        else
            iRare++;
        sArr[iRare] = s;
    }
    
    String callPatient()
    {
    	String sDummy;
    	if(isEmpty() == false)
    	{
            sDummy = sArr[iFront];
    		if(iFront == iRare)
            {
                iFront = -1;
                iRare = -1;
            }
            else if(iFront == sArr.length-1)
                iFront = 0;
            else
                iFront++;

    	}
    	
    	return "Nothing in Array";
 
    }
    
    void display()
    {
    	int i = iFront;
        while(i != iRare)
        {
            if(i == sArr.length-1)
            {
                i = 0;
            }
            System.out.println(sArr[i++]);
        }
    }
}

class TestStack
{
	public static void main(String args[])
	{
		QueuePat sobj = new QueuePat(5);
		
		sobj.addPatient("Ravindra Jadeja");
        sobj.addPatient("Messi");
		sobj.addPatient("Ronaldo");

        //System.err.println(sobj.callPatient());;
		sobj.display();
	}
    
}
