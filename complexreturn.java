class abc
{
private int real,img;
void input(int a,int b)
{
real=a;
img=b;
}
void show()
{
System.out.println(real+" + i"+img);
}
abc add(abc ob)
{
abc temp=new abc();
temp.real=real+ob.real;
temp.img=img+ob.img;
return temp;
}
}
class complexreturn
{
public static void main(String args[])
{
abc ob1=new abc();
abc ob2=new abc();
abc ob3=new abc();
ob1.input(10,10);
ob1.show();
ob2.input(10,10);
ob2.show();
ob3=ob2.add(ob1);
ob3.show();
}}