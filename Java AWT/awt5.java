import java.awt.*;
import java.awt.event.*;
class awt5 extends Frame
{
	awt5()
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
		g.drawOval(100,200,100,100);  //drawOval(x,y,w,h)
		g.drawArc(120,150,80,80,90,270); //drawArc(x,y,w,h,start angle,move angle)
	}
	public static void main(String ar[])
	{
       awt5 a = new awt5();
	}
}