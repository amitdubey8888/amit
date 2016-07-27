class exception2
{
public static void main(String args[])
{
try{
int n1=Integer.parseInt(args[0]);
int n2=Integer.parseInt(args[1]);
int n=n1+n2;
System.out.println("Sum is="+n);
}
catch(ArithmeticException ex)
{
System.out.println("Arithmetic Exception :"+ex.getMessage());
}
catch(NumberFormatException ex)
{
System.out.println("Format exception :"+ex.getMessage());
}
catch(Exception ex)
{
System.out.println("Exception :"+ex);
}
}
}