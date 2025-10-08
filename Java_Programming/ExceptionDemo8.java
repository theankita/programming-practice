
import java.util.*;

class ExceptionDemo8
{
    public static void main(String[] args) 
    {
      Scanner sobj = new Scanner(System.in);
      int iNo1=0,iNo2=0, iAns = 0;
      
      System.out.println("Enter first num");
      int no1 = sobj.nextInt();

       System.out.println("Enter second num");
       int no2 = sobj.nextInt();

       try{
        System.out.println("Inside try block");
        iAns= iNo1/iNo2;
       }

       catch(ArithmeticException aobj)    //Specific Catch
       {
        System.out.println("Inside catch block");
        System.out.println(aobj);
       }

       catch(Exception eobj)
       {
        System.out.println("Generic Inside catch block");   //Generic Catch
       }
       
       finally
       {
        System.out.println("Inside finally block");
       }
      System.out.println("The Division is: " +iAns);
      
    }
}