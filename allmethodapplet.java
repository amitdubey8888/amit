import java.awt.*;
import java.awt.event.*;
import java.applet.*;
public class allmethodapplet extends Applet 
{
TextArea messages=new TextArea(8,30);
public allmethodapplet()
{
messages.append("Constructor called\n");
}
public void init()
{
add(messages);
messages.append("Init called\n");
}
public void start()
{
messages.append("Start called\n");
}
public void stop()
{
messages.append("Stop called\n");
}
public void destroy()
{
messages.append("Destroy called\n");
}
public void paint(Graphics g)
{
messages.append("Paint called\n");
Dimension size=getSize();
g.drawRect(0,0,size.width-1,size.height-1);
}
}