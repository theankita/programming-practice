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
}

class Constructor

{
    public static void main(String A[]) 
    {

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo(11,21); //Demo onj
    }
}
// In java everything is dyanamic