import java.lang.annotation.*;
import java.lang.reflect.*;
@Retention(RetentionPolicy.RUNTIME)
@interface myanno
{
String str();
int val();
}
class meta
{
@myanno(str="annotation example",val=100)
public static void mymeth()
{
meta ob=new meta();
try
{
Class c=ob.getClass();
Method m=c.getMethod("mymeth");
myanno anno=m.getAnnotation(myanno.class);
System.out.println(anno.str()+" "+anno.val());
}
catch(NoSuchMethodException e)
{
System.out.println("method not found");
}
}
public static void main(String args[])
{
mymeth();
}
}