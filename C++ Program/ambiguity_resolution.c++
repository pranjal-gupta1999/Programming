#include <iostream>
using namespace std;
class A
{
   public: 
     void greet()
     {
         cout<<"hello"<<endl;
     }
};
class B
{
   public: 
     void greet()
     {
         cout<<"kaise ho"<<endl;
     }
};
class Derived : public A , public B{
    public:
      void greet()
      {
          B :: greet();    // ambiguous resolve syntax in multiple inheritance
      }
};
int main()
{
    Derived d;
    d.greet();
    return 0;
}
//agar base class aur derived class me same name function hai to wo ambiguous nahi hota kyuki base class ka function
// override ho jayega. 