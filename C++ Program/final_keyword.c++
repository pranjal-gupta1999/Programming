//final keyword is used so that a function or class do not get overrided. for variable its just a idntifiers.
//in c++ we use final keyword after class name or function name.
#include <iostream>
using namespace std;
class A final
{ public:
   virtual void show() final
   {
       cout<<"hi"<<endl;
   }
};
class B : public A{
   public:
     void show() final
   {cout<<"hello"<<endl;}
};
int main()
{
    B b;
    b.show();
    return 0;
} 