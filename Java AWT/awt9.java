import java.awt.*;
import java.awt.event.*;
class awt9 extends Frame
{
	awt9()
	{
        setVisible(true);
        setSize(400,500);
        setLocation(100,200);
        setBackground(Color.black);
        setForeground(Color.yellow);
        addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
	}
	public void paint(Graphics g)
	{
        g.fillRect(100,100,100,100);
        g.fill3DRect(250,100,100,100,false);
        g.fill3DRect(400,100,100,100,true);
	}
	public static void main(String ar[])
	{
		awt9 a = new awt9();
	}
}