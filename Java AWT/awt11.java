import java.awt.*;
import java.awt.event.*;
class awt11 extends Frame
{
	awt11()
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
		int x1 =100, y1 =100, x2 = 101, y2=100;
    for(int i=0;i<250;i++)
    {
      g.drawLine(x1,y1,x2,y2);
      x2+=1;
      try{Thread.sleep(10);}
      catch(Exception e){}
    }
	}
	public static void main(String ar[])
	{
		awt11 a = new awt11();
	}
}