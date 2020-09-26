import java.awt.*;
import java.awt.event.*;
class awt6 extends Frame
{
	awt6()
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
		int x[] = {100,200,300};
		int y[] = {200,400,400};
		int n=3;
		g.drawPolygon(x,y,n);   //drawPolygon(x[],y[],n)
	}
	public static void main(String ar[])
	{
       awt6 a = new awt6();
	}
}