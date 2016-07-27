class box
{
double width;
double height;
double depth;
box(double w,double d, double h)
{
System.out.println("Constructing Box");
width=w;
depth=d;
height=h;
}
double volume()
{
return (width*depth*height);
}
}
class boxconstructorpara
{
public static void main(String args[])
{
box mybox1=new box(1,2,3);
box mybox2=new box(1,2,3);
double vol;
vol=mybox1.volume();
System.out.println("Volume is "+vol);
vol=mybox2.volume();
System.out.println("Volume is "+vol);
}
}   