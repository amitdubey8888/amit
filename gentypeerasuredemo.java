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
class genstr<T extends String> 
{
T str;
genstr(T o)
{
str=o;
}
T getstr()
{
return str;
}
}
class gentypeerasuredemo
{
public static void main(String args[])
{
gen<Integer> iob=new gen<Integer>(99);
gen<Float> fob=new gen<Float>(100.2F);
System.out.println(iob.getClass().getName());
System.out.println(fob.getClass().getName());
}}