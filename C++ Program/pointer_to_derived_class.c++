#include <iostream>
using namespace std;
class Base
{
    public:
      int a, base_var;
      void set(int a1)
      {
          a=a1;
          cout<<"The value in base class is "<<a<<endl;
      }
};
class Derived : public Base
{
    public:
    int derive_var;
      void set(int a1)
      {
          a=a1;
          cout<<"The value in derived class is "<<a<<endl;
      }
};
int main()
{
    Base *b = new Derived;  //base class ka pointer derived class ke object ko point kar raha hai. ye pointer sirf base class ke member ko hi access karega. 
     b->set(3);  //pointing to base class set(). this is late binding .
     b->base_var =4;
     //b->derive_var = 6; this will throw error 

    Derived *d = new Derived;  //this access to both base and derived class members.
    d->set(4);
    d->base_var =5;
    d->derive_var = 7;

    return 0;
}