#include <iostream>
using namespace std;
class Base
{
    public:
      int a, base_var;
    virtual  void set(int a1)           //making this function virtual if we dont make it virtual then base class ke members hi access honge.
      {
          cout<<"Base class called"<<endl;
          a=a1;
      }
      void show()
      {
          cout<<"The value in base class is "<<a<<endl;
      }
};
class Derived : public Base
{
    public:
    int derive_var;
      void set(int a1)
      {
          cout<<"Derived class called"<<endl;
          a=a1;
      }
      void show()
      {
       cout<<"The value in derived class is "<<a<<endl;
      }
};
int main()
{
    Base *b = new Derived;  //base class ka pointer derived class ke object ko point kar raha hai.
     b->set(3);  //pointing to derived class set().binded at runtime.
     b->show();  //this is complile time binding as it call base class function.
    return 0;
}
//polymorphism hoti hai ek property jisme object, jo alag alag class ko belong kar rahe hai, ek tarah ke message ko respond kare.
//virtual function matlab hum base class ke function ko call karte hai using derived object. wo fir runtime par derived function hi execute karega.
//runtime bind is done in accordance with content of pointer ,,,  and compile time is done in accordance with type of pointer.
//virtual function cannot be a friend or static function.