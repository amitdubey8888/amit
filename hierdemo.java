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
class gen2<T,V> extends gen<T>
{
V ob2;
gen2(T o,V o2)
{
super(o);
ob2=o2;
}
V getob2()
{
return ob2;
}
}
class hierdemo
{
public static void main(String args[])
{
gen2<String,Integer> x=new gen2<String,Integer>("Value is: ",99);
System.out.print(x.getob());
System.out.println(x.getob2());
}}