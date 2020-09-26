import java.awt.*;
import java.awt.event.*;
class awt8 extends Frame
{
	awt8()
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
		g.fillRoundRect(100,100,200,200,30,30);
		try{
             Thread.sleep(500);
		}catch(Exception e){}
		g.setColor(Color.green);
		g.fillRoundRect(120,120,160,160,30,30);  // 20 ka gap hai dono side so 200 - 40 = 160
		try{
             Thread.sleep(500);
		}catch(Exception e){}
		g.setColor(Color.red);
		g.fillRoundRect(140,140,120,120,30,30);
		try{
             Thread.sleep(500);
		}catch(Exception e){}
		Color c =new Color(0,64,128);
		g.setColor(c);
		g.fillRoundRect(160,160,80,80,30,30);
	}
	public static void main(String ar[])
	{
       awt8 a = new awt8();
	}
}