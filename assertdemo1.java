class assertdemo1
{
static int val=3;
static int getnum()
{
return val--;
}
public static void main(String args[])
{
int n=0;
for(int i=0;i<10;i++)
{
assert (n=getnum())>0;
System.out.println("N is: "+n);
}
}
}
