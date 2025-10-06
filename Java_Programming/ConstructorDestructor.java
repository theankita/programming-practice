class Demo{
    public int iNo1;
    public int iNo2;

    public Demo()
    {
        System.out.println("Inside Default Constructor");
    }

    public Demo(int i, int j)
    {
        System.out.println("Inside Parameterised Constructor");
    }

    protected void finalize () // ~Demo()
    {
        System.out.println("Inside finalize");
    }
}

class ConstructorDestructor
{
    public static void main(String A[]) 
    {

        Demo dobj1 = new Demo(); //Demo dobj2()
        Demo dobj2 = new Demo(11,21); //Demo dobj1()

        dobj1 = null; //Garabage Colletion Is Done
        dobj2 = null; //Garabage Colletion Is Done

        System.gc();

        
        System.out.println("End Of Main");
    }
}
// In java everything is dyanamic