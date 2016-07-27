class box
{
private double width;
private double height;
private double depth;
box(box o)
{
width=o.width;
depth=o.depth;
height=o.height;
}
box(double w,double h,double d)
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
class boxweight extends box{
double weight;
boxweight(boxweight ob)
{
super(ob);
weight=ob.weight;
}
boxweight(double w,double d,double h,double m)
{
super(w,h,d);
weight=m;
}
boxweight()
{
super();
weight=-1;
}
boxweight(double len,double m)
{
super(len);
weight=m;
}
}
class demosuper
{
public static void main(String args[])
{
boxweight mybox1=new boxweight(10,20,15,34.3);
boxweight mybox2=new boxweight(2,3,4,0.076);
boxweight mybox3=new boxweight();
boxweight mycube=new boxweight(2,3);
boxweight myclone=new boxweight(mybox1);
double vol;
vol=mybox1.volume();
System.out.println("Volume of mybox1 is "+vol);
System.out.println("Weight of mybox1 is "+mybox1.weight);
vol=mybox2.volume();
System.out.println("\nVolume of mybox2 is "+vol);
System.out.println("Weight of mybox2 is "+mybox2.weight);
vol=mybox3.volume();
System.out.println("\nVolume of mybox3 is "+vol);
System.out.println("Weight of mybox3 is "+mybox3.weight);
vol=myclone.volume();
System.out.println("\nVolume of myclone is "+vol);
System.out.println("Weight of myclone is "+myclone.weight);
vol=mycube.volume();
System.out.println("\nVolume of mycube is "+vol);
System.out.println("Weight of mycube is "+mycube.weight);
}
}