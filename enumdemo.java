enum apple
{
jona,red,gold,wine,land;
}
class enumdemo
{
public static void main(String args[])
{
apple ap;
ap=apple.red;
System.out.println("Value of ap: "+ap);
ap=apple.gold;
if(ap==apple.gold)
{
System.out.println("ap contains gold.");
}
switch(ap)
{
case jona: System.out.println("jona is red.");
           break;
case gold: System.out.println("gold is yello.");
           break;
case red:  System.out.println("red delicious is red.");
           break;
case wine: System.out.println("wine is red.");
           break;
case land: System.out.println("cortland is red.");
           break;
}
}
}