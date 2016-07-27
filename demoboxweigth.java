class box
{
double width;
double height;
double depth;
box(box o)
{
width=o.width;
depth=o.depth;
height=o.height;
}
box(double w,double h,double h)
{
width=w;
depth=d;
height=h;
}
box()
{
width=-1;
depth=-1;
height=-1;
}
box(double len)
{
width=depth=height=len;
}
double volume()
{
return width*depth*height;
}
}
class boxweight extends box
{
double weight;
boxweight(double w,double d,double h,double m)
{
weight=w;
depth=d;
height=h;
weight=m;
}
}
class Demoboxweight
{
public static void main(String args[])
{
boxweight mybox1=new boxweight(10,20,30,40);
boxweight mybox2=new boxweight(1,2,3,4);
double vol;
vol=mybox1.volume();
System.out.println("Volume of mybox1 is "+vol);
System.out.println("Weight of mybox1 is "+mybox1.weight);
vol=mybox2.volume();
System.out.println("Volume of mybox2 is "+vol);
System.out.println("Weight of mybox2 is "+mybox2.weight);
}
}