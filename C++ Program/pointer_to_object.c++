#include <iostream>
using namespace std;
class A
{
   int a=5;
   public:
     void show()
     {
         cout<<"the value is "<<a<<endl;
     }
};
int main()
{
//    A a1;
//    A * p = &a1;
//    a1.show();
A * ptr = new A;   //pointer of object type
(*ptr).show();   
 ptr->show();//this is an arrow operator . it dereferenced the pointer then call the function.
    return 0;
}