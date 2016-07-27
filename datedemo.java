import java.util.Date;
class datedemo
{
public static void main(String args[])
{
Date date=new Date();
System.out.println(date);
long msec=date.getTime();
System.out.println("Milli seconds since Jan.1,1997 GMT = "+msec);
}
}