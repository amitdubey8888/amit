class twod
{
int x,y;
twod(int a,int b)
{
x=a;
y=b;
}
}
class threed extends twod
{
int z;
threed(int a,int b,int c)
{
super(a,b);
z=c;
}
}
class fourd extends threed
{
int t;
fourd(int a,int b,int c,int d)
{
super(a,b,c);
t=d;
}
}
class Coords<T extends twod>
{
T[] coords;
Coords(T[] o)
{
coords=o;
}
}
class boundedwildcard
{

static void showxy(Coords<?> c)
{
System.out.println("XY coordinates: ");
for(int i=0;i<c.coords.length;i++) 
  {
System.out.println(c.coords[i].x + "  " + c.coords[i].y);
  }
}


static void showxyz(Coords<? extends threed> c )
{
System.out.println("XYZ coordinates: ");
for(int i=0;i<c.coords.length;i++) 
  {
System.out.println(c.coords[i].x + "  " + c.coords[i].y + "  " + c.coords[i].z);
  }
}


static void showall(Coords<? extends fourd> c)
{
System.out.println("XYZT coordinates: ");
for(int i=0;i<c.coords.length;i++) 
  {
System.out.println(c.coords[i].x + "  "+
                   c.coords[i].y + "  "+
                   c.coords[i].z + "  "+
                   c.coords[i].t);
  }
}


public static void main(String args[])
{


twod td[]={
           new twod(0,0),
           new twod(7,9),
           new twod(18,4),
           new twod(-1,-23)
           };
Coords<twod> tdlocs=new Coords<twod>(td);
System.out.println("Contents of tdlocks.");
showxy(tdlocs);


fourd fd[]={
            new fourd(1,2,3,4),
            new fourd(6,7,89,9),
            new fourd(3,4,6,6),
            new fourd(-1,-2,-3,-3)
            };
Coords<fourd> fdlocs=new Coords<fourd>(fd);
System.out.println("Contents of fdlocs.");
showxy(fdlocs);
showxyz(fdlocs);
showall(fdlocs);
}
}
