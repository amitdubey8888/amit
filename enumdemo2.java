enum apple
{
jona,red,gold,wine,land;
}
class enumdemo2
{
public static void main(String args[])
{
apple ap;
System.out.println("Here are all apple constants: ");
apple allapples[]=apple.values();
for(apple a : allapples)
System.out.println(a);
System.out.println("again all apple constants: ");
for(int i=0;i<allapples.length;i++) System.out.println(allapples[i]);
ap=apple.valueOf("wine");
System.out.println("ap contains "+ap);
}
}