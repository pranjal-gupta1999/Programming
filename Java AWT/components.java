import java.awt.*;
import java.awt.event.*;
class fun extends Frame
{
	TextField t1,t2;
	Label un;
	Checkbox ck1,ck2,ck3,ck4;
	Choice cb;
	List l1;
	CheckboxGroup cx;  //since awt not contains radio class so we use checkboxgroup to make them radio
	TextArea tx;
	fun()
	{
		FlowLayout fl = new FlowLayout();
		setLayout(fl);
		un = new Label("Enter Name");
		add(un);
		t1 = new TextField(20);
		add(t1);
		t2 = new TextField("password");
		t2.setEchoChar('*');
		add(t2);
		ck1 = new Checkbox("java",true);
		add(ck1);
		ck2 = new Checkbox("python");
		add(ck2);
		cb = new Choice();
		cb.add("java");
		cb.add("php");
		cb.add("c++");
		add(cb);
		l1 = new List();
		l1.add("java");
		l1.add("php");
		l1.add("c++");
		l1.add("c");
		l1.add("python");
		add(l1);
         cx = new CheckboxGroup();
		ck3 = new Checkbox("java",true,cx);
		add(ck3);
		ck4 = new Checkbox("python",false,cx);
		add(ck4);
		tx = new TextArea(20,15); //20 -> rows , 15 -> column and parameters are not necessary.
		add(tx);
	  
	}
	
}
class components
{
	public static void main(String ar[])
	{
	  fun f = new fun();
	  f.setVisible(true);
	  f.setSize(400,400);
	  f.setLocation(100,100);
	  f.setBackground(Color.white);
	  f.addWindowListener(new WindowAdapter(){public void windowClosing(WindowEvent e){System.exit(0);}});

	}
}
