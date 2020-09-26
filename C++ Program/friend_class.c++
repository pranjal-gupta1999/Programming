#include <iostream>
using namespace std;
class A
{
    int a=0;
    friend class B;
};
class B
{ public:
   void show(A a1)
  {
      cout<<"The value is "<<a1.a<<endl;
  }
};
int main()
{
    A a;
    B b;
    b.show(a);
    return 0;
}