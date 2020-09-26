#include <iostream>
using namespace std;
class Complex
{
int a,b;
   public:
      Complex();  //declare a contructor of same name as of class
      void printdata()
      {
          cout<<"The value is "<<a<<"+"<<b<<"i"<<endl;
      }
};
Complex :: Complex()   //defining a constructor. This is default constructor , takes no parameter.
{
    a=10;
    b=5;
}
int main()
{
    Complex c;
    c.printdata();
    return 0;
}
// Constructor get automatically invoked when object is created.(jitni baar object banyenge utni baar invoke hoga.)
//Constructor have no return type.
//constructor should be declared public.