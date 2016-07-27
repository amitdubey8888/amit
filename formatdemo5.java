import java.util.*;
class formatdemo
{
public static void main(String args[])
{
Formatter fmt=new Formatter();
fmt.format("% d",-199);
System.out.println(fmt);
fmt=new Formatter();
fmt.format("% d",199);
System.out.println(fmt);
fmt=new Formatter();
fmt.format("% d",-200);
System.out.println(fmt);
fmt=new Formatter();
fmt.format("% d",200);
System.out.println(fmt);
}
}
