import java.util.*;
class gregoriancalenderdemo
{
public static void main(String args[])
{
String months[]={"Jan","Feb","March","April","May","Jun","july","Aug","Sep","Oct","Nov","Dec"};
int year;
GregorianCalendar calender=new GregorianCalendar();
System.out.print("Date: ");
System.out.print(months[calender.get(Calendar.MONTH)]);
System.out.print(" "+calender.get(Calendar.DATE)+" ");
System.out.print(calender.get(Calendar.YEAR));
System.out.print("\nTime: ");
System.out.print(calender.get(Calendar.HOUR)+":");
System.out.print(calender.get(Calendar.MINUTE)+":");
System.out.print(calender.get(Calendar.SECOND));
calender.set(Calendar.HOUR,10);
calender.set(Calendar.MINUTE,29);
calender.set(Calendar.SECOND,22);
System.out.print("\nUpdated Time: ");
System.out.print(calender.get(Calendar.HOUR)+":");
System.out.print(calender.get(Calendar.MINUTE)+":");
System.out.print(calender.get(Calendar.SECOND));
System.out.println(year=calender.get(Calendar.YEAR));
if(calender.isLeapYear(year)) System.out.println("The current year is leap year.");
else System.out.println("The current year is not a leap year.");
}
}
