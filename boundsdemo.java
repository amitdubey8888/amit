class stats<T extends Number>
{
T[] nums;
stats(T[] o)
{
nums=o;
}
double average()
{
double sum=0.0;
for(int i=0;i<nums.length;i++)
{
sum=sum+nums[i].doubleValue();
}
return sum/nums.length;
}
}
class boundsdemo
{
public static void main(String args[])
{
Integer inums[]={1,2,3,4,5,6,7};
stats<Integer> iob=new stats<Integer>(inums);
double v=iob.average();
System.out.println("iob average is "+v);
Double dnums[]={1.0,2.0,3.0,4.0,5.0};
stats<Double> dob=new stats<Double>(dnums);
double w=dob.average();
System.out.println("dob average is "+w);
}
}