enum apple
{
jona,gold,red,wine,land;
}
class enumdemo4
{
public static void main(String args[])
{
apple ap,ap2,ap3;
System.out.println("Here are all apple constants "+"and their ordina values: ");
for(apple a : apple.values())
System.out.println(a+" "+a.ordinal());
ap=apple.red;
ap2=apple.gold;
ap3=apple.red;
if(ap.compareTo(ap2)<0) System.out.println(ap+" comes before "+ap2);
if(ap.compareTo(ap2)>0) System.out.println(ap2+" comes before "+ap);
if(ap.compareTo(ap3)==0) System.out.println(ap+" equals "+ap3);
if(ap.equals(ap2)) System.out.println("Error !");
if(ap.equals(ap3)) System.out.println(ap+" equals "+ap3);
if(ap==ap3) System.out.println(ap+"=="+ap3);

}
}
