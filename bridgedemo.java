class gen<T>
{
T ob;
gen(T o)
{
ob=o;
}
T getob()
{
return ob;
}
}
class gen2 extends gen<String> 
{
gen2(String o)
{
super(o);
}
String getob()
{
System.out.print("U called string ob(): ");
return ob;
}
}
class bridgedemo
{
public static void main(String args[])
{
gen2 str=new gen2("generic test");

System.out.println(str.getob());
}}