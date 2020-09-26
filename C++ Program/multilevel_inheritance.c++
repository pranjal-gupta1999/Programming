#include <iostream>
using namespace std;
class A
{
  public:
     int a=4;
};
class B : public A
{ 
  public:
    int b=3; 
};
class C : public B
{
    public:
    void show()
    {
  cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    C c;
    c.show();
    return 0;
}