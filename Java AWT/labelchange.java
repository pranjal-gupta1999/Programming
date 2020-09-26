import java.awt.*;
import java.awt.event.*;
class A extends Frame implements ActionListener
{
	Button b1,b2;
	int i=0;
    A()
    {
       setLayout(null);
       Font f = new Font("chiller",Font.BOLD,20);
       setFont(f);
       b1= new Button();
       b1.setSize(100,100);
       b1.setLocation(30,50);
       add(b1);
       b2= new Button();
       b2.setSize(100,100);
       b2.setLocation(150,50);
       add(b2);
       b1.addActionListener(this);
       b2.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {   
      Button b = (Button)e.getSource();  //getsource() return object
      if(i%2==0)
      {
         	b.setLabel("X");
         	i++;
      }
      else
      {     b.setLabel("O");
            i++; 
      }
}
}
class labelchange
{
    public static void main(String ar[])
    {
       A a = new A();
       a.setVisible(true);
       a.setSize(400,400);
       a.setLocation(100,100);
       a.setBackground(Color.black);
       a.addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});
    }
}