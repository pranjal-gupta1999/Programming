#include <iostream>
using namespace std;
class A
{   public:
     A(){cout<<"A constructor called!"<<endl;}
  virtual ~A(){cout<<"A destructor called!"<<endl;}
  virtual void add(){cout<<"function A"<<endl;}

};
class B : public A{
    public:
    B(){cout<<"B constructor called!"<<endl;}
   ~B(){cout<<"B destructor called!"<<endl;}
  void add(){cout<<"function B"<<endl;}
};
int main()
{
    A *a = new A();
    A *b = new B();
        a->add();
        b->add();  //without virtual it gives  function A

        delete a;
        delete b; //without virtual it gives A destructor called
    return 0;
}
//jab hum b object banate hai to pehele child ka data access hoga fir derived class ka data.Similarly jab hum b ko delete krte hai to pehle b destructor call hoga fir A destructor