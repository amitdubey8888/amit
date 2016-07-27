class exception1
{
public static void main(String args[])
 {
try{
     int n1=Integer.parseInt(args[0]);
     int n2=Integer.parseInt(args[1]);
     int n=n1+n2; 
    }
catch(ArithmeticException ex)
    {
System.out.println("Arithmetic exception block 1");
    }
/*catch(ArithmeticException ex)
    {
System.out.println("Arithmetic exception block 2");
    }*/
  }
}