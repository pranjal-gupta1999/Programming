#include <iostream>
using namespace std;
class A
{
    public:
    int a,b;
};
class B : public A{
public:
void setdata(int x, int y);
void show()
{
cout<<a<<" "<<b<<endl;

}
};
void B :: setdata(int x, int y)
{
    a=x,b=y;
    show();
}
int main()
{
    B b;
    b.setdata(1,2);
    return 0;
}