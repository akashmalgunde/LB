class Test
{
    public static void main(String args[])
    {
        int Arr[] = new int[6];

        Arr[0] = 2;
        Arr[1] = 8;
        Arr[2] = 7;
        Arr[3] = 5;
        Arr[4] = 2;
        Arr[5] = 1;

        int i = 0;
        int j = 0;
        int index = Arr.length;
        for(i = 0; i < Arr.length; i++)
        {
            for( j = i + 1; j < Arr.length; j++)
            {
                if(Arr[i] <= Arr[j])
                    break;

            }

            if(j == index )
                System.out.print(Arr[i] + " ");

        
                

            }
        }
            
        




    }
