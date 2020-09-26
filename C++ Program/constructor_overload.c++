#include <iostream>
using namespace std;
class Complex
{
   int x, y;
    public:
      Complex()
      {
          x=0,y=0;
      }
      Complex(int a , int b)
      {
          x= a;
          y= b;
      }
      Complex(int s)
      {
          x=s;
          y=0;
      }
      void print()
      {
          cout<<"The value is "<<x<<"+"<<y<<"i"<<endl; 
      }
};
int main()
{
    Complex c1(1,3);
    Complex c2(4);
    Complex c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}