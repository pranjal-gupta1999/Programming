#include <iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
       Complex(int , int);  //constructor declared  parameterized constructoe as it takes 2 parameter.

       void printdata()
       {
           cout<<"The value is "<<a<<"+"<<b<<"i"<<endl;
       }
};
Complex :: Complex(int x, int y)  //defining constructor
{
    a=x;
    b=y;
}
int main()
{
    Complex c(1,5);  //This is implicit call
    c.printdata();
    Complex c1= Complex(3,5);  //This is explicit call
    c1.printdata();
    return 0;
}