#include <iostream>
using namespace std;
class Simple{
    public:
    Simple(int a, int b=2, int c=5)
    {
        cout<<"The data is "<<a<<","<<b<<" and "<<c<<endl;
    }
};
int main()
{
    Simple s1(1,2,3), s2(1), s3(3,6);
}