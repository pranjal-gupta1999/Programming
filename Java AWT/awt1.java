import java.awt.Frame;
import java.awt.Color;
import java.awt.event.*;
class awt1
{
	public static void main(String ar[])
	{
		Frame f =new Frame();  //this is first method to create frame
		f.setVisible(true);
		f.setSize(200,200);   //setSize(w,h)
		f.setLocation(200,300);    //setLocation(x,y)
		f.setBackground(Color.black);
		f.addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
	}
}