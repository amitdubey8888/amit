enum apple
{
jona(1),gold(2),red(3),wine(4),land(5);

private int price;
apple(int p) {price=p;}
int getprice() {return price;}
}
class enumdemo3
{
public static void main(String args[])
{
apple ap;
System.out.println("wine costs "+apple.wine.getprice()+" cents.\n");
System.out.println("all apple prices: ");
for(apple a : apple.values())
System.out.println(a+" costs "+a.getprice()+" cents.");
}
}
