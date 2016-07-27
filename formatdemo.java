import java.util.*;
class formatdemo
{
public static void main(String args[])
{
Formatter fmt=new Formatter();
for(double i=1000;i<1.0e+10;i*=100)
{
fmt.format("%g ", i);
System.out.println(fmt);
}
}
}