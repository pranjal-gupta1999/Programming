import java.awt.*;
import java.awt.event.*;
class awt4 extends Frame
{
	awt4()
	{
        setVisible(true);
      	setSize(500,500);
      	setLocation(300,400);
      	setBackground(Color.black);
      	setForeground(Color.pink);
      	addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
        
	}
	public void paint(Graphics g)
	{
		g.drawRect(100,100,200,300); //drawRect(x,y,w,h)
		g.drawRoundRect(120,120,100,140,40,90);  //drawRoundRect(x,y,w,h,xr,yr)
	}
	public static void main(String ar[])
	{
       awt4 a = new awt4();
	}
}