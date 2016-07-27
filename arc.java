import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class arc extends Applet
{
public void paint(Graphics g)
{
g.drawArc(60,125,80,40,180,180);
g.fillArc(60,125,80,40,180,180);
g.setFont(Color.blue);
g.drawString("Arc example ",50,50);
}}