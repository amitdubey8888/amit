import java.awt.*;
import java.applet.*;
public class graphicsmethod extends Applet
{
String s=new String();
String s1=new String();
String s2=new String();
Font f1=new Font("Courier New",Font.BOLD,20);
public void paint(Graphics g)
{
g.setFont(f1);
g.drawString("Illustration of method of graphics class",200,500);
Font f2=g.getFont();
s=f2.toString();
g.drawString(s,5,540);
g.setColor(Color.green);
Color col=g.getColor();
s2=col.toString();
g.drawString(s2,5,560);
g.fillRect(500,15,70,90);
g.drawRect(160,5,60,60);
g.drawOval(10,120,155,95);
g.setColor(Color.yellow);
g.fillOval(700,140,50,150);
g.setColor(Color.black);
g.drawLine(380,100,200,180);
g.drawArc(400,150,180,280,90,70);
int x2[]={200,120,280,240};
int z2=4,y2[]={260,370,370,270};
g.setColor(Color.red);
g.fillPolygon(x2,y2,z2);
g.setColor(Color.blue);
g.drawRect(15,15,30,50);
FontMetrics f3=g.getFontMetrics();
s1=f3.toString();
g.drawString(s1,5,580);
g.setColor(Color.magenta);
g.fillRoundRect(510,400,90,80,20,20);
}}