//this is an example of nesting of member function.

#include <iostream>
#include <string>
using namespace std;
class binary    //by default value will be private in class
{   private:
        string s;
        void chk_bin(void);  //koi bhi cheez private me hai to usse main function se use nahi kar skte

    public:
        void read(void);       
        void display(void);
        void ones_compliment(void);
};

void binary :: read(void)
{
    cout<<"Enter binary no."<<endl;
    cin>>s;
    chk_bin();  //we can call private members from the function
}

void binary :: chk_bin(void)
{
   for(int i=0;i<s.length();i++)
   {
       if(s.at(i)!='0' && s.at(i)!='1')
       {
           cout<<"It is not binary no."<<endl;
           exit(0);
       }
   }
}

void binary :: display(void)
{
    cout<<"Displaying your no."<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary :: ones_compliment(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
             s.at(i)='0';
        }
        
    }
}
int main()
{
    binary b;  //creating an object.
    b.read();
  //  b.chk_bin(); error
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}