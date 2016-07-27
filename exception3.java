class exception3
{
public static void main(String args[])
{
try{
if(args[0]=="Hello")
System.out.println("String is right");
else
throw new Exception("Invalid string");
}
catch(Exception ex)
{
System.out.println("Exception :"+ex);
}
}
}
