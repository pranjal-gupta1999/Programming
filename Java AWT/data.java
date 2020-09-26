import java.awt.*;
import java.awt.event.*;
class fun extends Frame implements ActionListener
{
	TextField tx1,tx2,tx3;
	Button b;
	fun()
	{ 
		FlowLayout fl = new FlowLayout();
		setLayout(fl);
		tx1=new TextField(10);
		add(tx1);
		tx2=new TextField(10);
		add(tx2);
		b=new Button("Sum");
		add(b);
		tx3=new TextField(10);
		add(tx3);
       b.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e)
    {
    	String s1 = tx1.getText();
    	String s2 = tx2.getText();
    	int x = Integer.parseInt(s1);
    	int y = Integer.parseInt(s2);
    	int z = x+y;
    	tx3.setText(""+z);
    }
}
class data
{
	public static void main(String ar[])
	{
		fun f = new fun();
		f.setVisible(true);
		f.setSize(400,400);
		f.setLocation(100,100);
		f.setBackground(Color.black);
		f.addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
	}
}