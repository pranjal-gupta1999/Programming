import java.awt.*;
import java.awt.event.*;
class awt13 extends Frame
{
	awt13()
	{
        setVisible(true);
        setSize(300,300);
        setLocation(100,200);
        setBackground(Color.black);
        setForeground(Color.yellow);
        addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
	}
	public void paint(Graphics g)
	{
		int x1 =100, y1 =100, x2 = 100, y2=100, sa=0, ma=20;
    for(int i=0;i<18;i++)
    {
     g.fillArc(x1,y1,x2,y2,sa,ma);
     sa+=20;
     try{Thread.sleep(100);}
     catch(Exception e){} 
    }
     
	}
	public static void main(String ar[])
	{
		awt13 a = new awt13();
	}
}