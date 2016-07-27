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
class gen2<T> extends gen<T>
{
gen2(T o)
{
super(o);
}
}
class hierdemo3
{
public static void main(String args[])
{
gen2<Integer> iob=new gen2<Integer>(99);
gen2<Integer> iob2=new gen2<Integer>(100);
gen2<String> str=new gen2<String>("generic test");
if(iob2 instanceof gen2<?>) System.out.println("iob2 is instance of gen2.");
if(iob2 instanceof gen<?>) System.out.println("iob2 is instance of gen.");
if(str instanceof gen2<?>) System.out.println("str is instance of gen2.");
if(str instanceof gen<?>) System.out.println("str is instance of gen.");
if(iob instanceof gen2<?>) System.out.println("iob is instance of gen2.");
if(iob instanceof gen<?>) System.out.println("iob is instance of gen.");
}}