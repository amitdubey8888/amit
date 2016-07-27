class a{
int i;
protected int j;
void setij(int x,int y)
{
i=x;
j=y;
}
}
class b extends a{
int total;
void sum()
{
total=i+j;
}
}
class access
{
public static void main(String args[])
{
b subob=new b();
subob.setij(10,20);
subob.sum();
System.out.println("Total is "+subob.total);
}
}