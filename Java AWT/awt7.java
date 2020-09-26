import java.awt.*;
import java.awt.event.*;
class awt7 extends Frame
{
	awt7()
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
		g.fillRect(100,100,200,200);
		g.setColor(Color.green);
		g.fillRect(120,120,160,160);  // 20 ka gap hai dono side so 200 - 40 = 160
		g.setColor(Color.red);
		g.fillRect(140,140,120,120);
		g.setColor(Color.blue);
		g.fillRect(160,160,80,80);
	}
	public static void main(String ar[])
	{
       awt7 a = new awt7();
	}
}