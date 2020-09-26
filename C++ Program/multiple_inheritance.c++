#include <iostream>
using namespace std;
class A
{
   public:
   int a;
};
class B 
{
    public:
    int b;
};
class C : public A ,public B {
    public:
    void class1(int c1, int c2)
    {
        a= c1, b= c2;
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    
    C c1;
    c1.class1(4,3);
    return 0;
}