import  java.util.*;
class duplicatevalue
{
public static void main(String args[])
{
Vector v=new Vector();
v.add("Dehli");
v.add("Mumbai");
v.add("Calcutta");
v.add("Chennai");
v.add("Dehli");
Vector tempvec=new Vector();
String tempval;
for(int i=0;i<=v.size();i++)
{
tempval=(String)v.elementAt(i);
if(tempval!=null)
{
if(tempvec.isEmpty())
  tempvec.addElement(tempval);
if(tempvec.indexOf(tempval)==-1)
  tempvec.addElement(tempval);
}}
for(int i=0;i<tempvec.size();i++)
{
System.out.println(tempvec.elementAt(i));
}
}
}
