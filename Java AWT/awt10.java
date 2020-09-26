import java.awt.*;
import java.awt.event.*;
class awt10 extends Frame
{
	awt10()
	{
        setVisible(true);
        setSize(600,500);
        setLocation(100,200);
        setBackground(Color.black);
        setForeground(Color.yellow);
        addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
	}
	public void paint(Graphics g)
	{
		int x1 =150, y1=100, x2=400, y2=100;
       for(int i=1;i<=10;i++)
       {
       	try{Thread.sleep(500);}
       	catch(Exception e){}
       	g.drawLine(x1,y1,x2,y2);
       	x1 = x1+10;
       	x2 = x2-10;
       	y1 = y1+10;
       	y2 = y2+10;
       }
	}
	public static void main(String ar[])
	{
		awt10 a = new awt10();
	}
}