interface MinMax<T extends Comparable<T>>
{
T min();
T max();
}
class myclass<T extends Comparable<T>> implements MinMax<T>
{
T[] vals;
myclass(T[] o) 
{
vals=o;
}
public T min()
{
T v=vals[0];
for(int i=1;i<vals.length;i++)
if(vals[i].compareTo(v)<0) v=vals[i];
return v;
}
public T max()
{
T v=vals[0];
for(int i=1;i<vals.length;i++) 
if(vals[i].compareTo(v)>0) v=vals[i];
return v;
}
}
class genericinterfaces
{
public static void main(String args[])
{
Integer inums[]={1,2,3,4,5,6,7,8,9};
Character chr[]={'a','b','c','d','e','f','g'};
myclass<Integer> iob=new myclass<Integer>(inums);
myclass<Character> cob=new myclass<Character>(chr);
System.out.println("Max value in inums: "+iob.max());
System.out.println("Min value in inums: "+iob.min());
System.out.println("Max value in chr: "+cob.max());
System.out.println("Min value in chr: "+cob.min());
}
}