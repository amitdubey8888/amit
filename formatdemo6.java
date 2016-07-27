import java.util.*;
class formatdemo6
{
public static void main(String args[])
{
Formatter fmt=new Formatter();
Calendar cal=Calendar.getInstance();
fmt.format("Today is day %te of %<tb, %<ty",cal);
System.out.println(fmt);
}
}