#include <iostream>
using namespace std;
class A
{
   public:
   int a;
};
class B : public A{
    public:
    void class1(int b)
    {
        a=b;
        cout<<a<<endl;
    }
};
class C : public A{
  public :
    void class2(int c)
    {
        a=c;
        cout<<a<<endl;
    }
};
int main()
{
    B b1;
    b1.class1(2);
    C c1;
    c1.class2(3);
    return 0;
}