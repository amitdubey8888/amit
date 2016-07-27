class box
{
double width;
double height;
double depth;
box()
{
System.out.println("Constructing Box");
width=10;
depth=20;
height=30;
}
double volume()
{
return (width*depth*height);
}
}
class boxconstructor
{
public static void main(String args[])
{
box mybox1=new box();
box mybox2=new box();
double vol;
vol=mybox1.volume();
System.out.println("Volume is "+vol);
vol=mybox2.volume();
System.out.println("Volume is "+vol);
}
}   