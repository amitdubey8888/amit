import java.util.*;
import java.io.*;
class avgfile
{
public static void main(String args[])
throws IOException
{
int count=0;
double sum=0.0;
FileWriter fout=new FileWriter("test.txt");
fout.write("2 3.4 5 6 7.4 9.1 10.5 done");
fout.close();
FileReader fin=new FileReader("test.txt");
Scanner conin=new Scanner(fin);
while(conin.hasNext())
{
if(conin.hasNextDouble()){
sum+=conin.nextDouble();
count++;
}
else{
String str=conin.next();
if(str.equals("done")) break;
else{
System.out.println("Data format error.");
return;
}
}
}
fin.close();
System.out.println("Average is "+sum/count);
}
}