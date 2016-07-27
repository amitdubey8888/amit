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
int color;
boxweight(double w,double d,double h,int c)
{
weight=w;
depth=d;
height=h;
color=c;
}
}
class ref
{
public static void main(String args[])
{
boxweight weightbox=new boxweigth(1.0,2.0,3.0,4);
box plainbox=new box();
double vol;
vol=weightbox.volume();
System.out.println("Volume of weightbox is "+vol);
System.out.println("Weight of weightbox is "+weightbox.color);
System.out.println();
plainbox=weightbox();
vol=plainbox.volume();
System.out.println("Volume of plainbox is "+box);
System.out.println("Weight of plainbox is "+plainbox.weight);
}
}