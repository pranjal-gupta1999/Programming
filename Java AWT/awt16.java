import java.awt.*;
import java.awt.event.*;
class awt16 extends Frame implements ActionListener
{ Button b1,b2;
	awt16()
	{
		FlowLayout fl = new FlowLayout();
		setLayout(fl);
        b1 = new Button("Click");
        add(b1);
        b1.addActionListener(this);
        b2 = new Button("Click");
        add(b2);
        b2.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==b1)
		{
		   setBackground(Color.red);	
		}
		else{setBackground(Color.white);}
		
	}
	public static void main(String ar[])
	{
		awt16 a = new awt16();
		a.setVisible(true);
		a.setSize(200,200);
		a.setLocation(100,100);
		a.setBackground(Color.black);
		a.addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
	}
}