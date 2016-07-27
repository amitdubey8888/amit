class box
{
double width;
double height;
double depth;
void set(double w,double d,double h)
{
width=w;
depth=d;
height=h;
}
double volume()
{
return (width*depth*height);
}
}
class boxmethodpara
{
public static void main(String args[])
{
box mybox1=new box();
box mybox2=new box();
double vol;
mybox1.set(1,2,3);
mybox2.set(1,2,3);
vol=mybox1.volume();
System.out.println("Volume is "+vol);
vol=mybox2.volume();
System.out.println("Volume is "+vol);
}
}   