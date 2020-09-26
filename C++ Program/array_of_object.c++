#include <iostream>
using namespace std;
class complex
{
    int a,b;
     public:
       void setdata(int v1, int v2)
       {
           a= v1;
           b= v2;
       }

       void printdata()
       {
           cout<<"The complex no. is "<<a<<"+"<<b<<"i"<<endl;
       }

       void setdatabysum(complex o1, complex o2)  //passing object of complex class as an argument
       {
           a= o1.a + o2.a ;
           b= o1.b + o2.b ;
       }
};

int main()
{
    complex f[2];     // complex object as array
    f[0].setdata(1,2);
    f[0].printdata();

    f[1].setdata(3,4);
    f[1].printdata();

    f[2].setdatabysum(f[0],f[1]);
    f[2].printdata();

    return 0;
}
