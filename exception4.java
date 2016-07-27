
class myexception extends Exception
{
myexception(String s)
{
super(s);
}
}
class exception4
{
public static void main(String args[])
{
if(args[0]=="Hello")
System.out.println("String is ok");
else
try{
throw new myexception("Invalid string");
}
catch(myexception ex)
{
System.out.println("Exception :"+ex.getMessage());
}
}
}