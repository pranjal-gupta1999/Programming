import java.awt.Frame;
import java.awt.Color;
import java.awt.event.*;
class awt2 extends Frame   //this is second method to make frame.
{
	awt2()
      {
      	setVisible(true);
      	setSize(200,300);
      	setLocation(300,400);
      	setBackground(Color.green);
      	addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
      } 
	public static void main(String ar[])
	{
       awt2 a =new awt2();
	}
}