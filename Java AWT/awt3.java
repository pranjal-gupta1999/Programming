import java.awt.*;
import java.awt.event.*;
class awt3 extends Frame
{
	awt3()
	{
        setVisible(true);
      	setSize(500,500);
      	setLocation(300,400);
      	setBackground(Color.black);
      	setForeground(Color.pink);
      	Font f = new Font("SERIF",Font.BOLD,40);  //to make the costumisable fonts we use this class   Font(s ,italic or bold ,size )
      	setFont(f);  //TO check the color name we use javap java.awt.Font
      	addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
        
	}
	public void paint(Graphics g)  //by default this method is present Graphics class
	{
       g.drawString("Pranjal Gupta",100,200); //drawString(s,x,y)
       g.drawLine(100,100,200,200);  //drawLine(x1,y1,x2,y2)
	}
	public static void main(String ar[])
	{ 
		awt3 a= new awt3();

	}

}