package Mypack;
class balance{
String name;
double bal;
balance(String n,double b)
{
name=n;
bal=b;
}
void show()
{
if(bal<0)
{
System.out.println("----> ");
}
System.out.println(name + ": $ "+bal);
}
}
class accountbalance{
public static void main(String args[])
{
balance current[]=new balance[3];
current[0]=new balance("Amit Dubey",123.45);
current[1]=new balance("Raj Dubey",123.46);
current[2]=new balance("Ankita Dubey",123.47);
for(int i=0;i<3;i++) current[i].show();
}
}
