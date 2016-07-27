class gencons
{
private double val;
<T extends Number> gencons(T arg)
{
val=arg.doubleValue();
}
void showval()
{
System.out.println("Value: "+val);
}
}
class  genericconstructor
{
public static void main(String args[])
{
gencons test=new gencons(100);
gencons test2=new gencons(123.5F);
test.showval();
test2.showval();
}
}