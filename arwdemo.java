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
class rawdemo
{
public static void main(String args[])
{
gen<Integer> iob=new gen<Integer>(22);
gen<String> str=new gen<String>("Generic Test");
gen raw=new gen(new Double(123.45));
double d=(Double) raw.getob();
System.out.println("Value: "+d);
str=raw;
raw=iob;
System.out.println("Value: "+str);
System.out.println("Value: "+raw);
}}