#include <iostream>
using namespace std;
template <typename T,typename U>
class Details
{
   private: 
       T x;
       U y;
       int map;
    public:
        void setdata(T a,U b)
        {
            x=a;
            y=b;
        }
        void getdata()
        {cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;}
};
int main()
{
    Details <int,float>d1;
    d1.setdata(4,2.3);
    d1.getdata();
    return 0;
}
//template is a formula for creating generic classes and functions. Any type can be put and then considered using object.