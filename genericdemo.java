class Gen<T>{
T ob;
Gen(T o)
{
ob=o;
}
T getob()
{
return ob;
}
void showtype()
{
System.out.println("Type of T is "+ob.getClass().getName());
}
}
class genericdemo
{
public static void main(String args[])
{
Gen<Integer> iob;
iob=new Gen<Integer>(88);
iob.showtype();
int v=iob.getob();
System.out.println("Value: "+v);
Gen<String> strob=new Gen<String>("Generic test");
strob.showtype();
String str=strob.getob();
System.out.println("Value: "+str);
}
}