class autoboxexpression
{
public static void main(String args[])
{
Integer iob,iob2;
int i;
iob=100;
System.out.println("Original values of iob: "+iob);
++iob;
System.out.println("After ++iob: "+iob);
iob2=iob+(iob/3);
System.out.println("iob after expression: "+iob2);
i=iob+(iob/3);
System.out.println("i after expression: "+i);
}
}