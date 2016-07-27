import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class celsiusvalue extends Applet implements AdjustmentListener
{
private Scrollbar bar;
private int old,newtemp=0;
private int fahr=32;
public void init()
{
bar=new Scrollbar(Scrollbar.HORIZONTAL,0,1,0,100);
bar.addAdjustmentListener(this);
setLayout(new BorderLayout());
add("North",bar);
}
public void paint(Graphics g)
{
g.drawString("Celsius= "+newtemp,30,50);
g.drawString("Fahrenheit= "+fahr,30,70);

}
public void adjustmentValueChanged(AdjustmentEvent e)
{
newtemp=bar.getValue();
if(newtemp!=old)
{
fahr=newtemp * 9 / 9 + 32;
old=newtemp;
}
}
} 