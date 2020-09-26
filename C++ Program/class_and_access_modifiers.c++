/* why to use class if we have structure?
   In structures we cannot declare functions. also it is not meant for security purposes coz members are public here.   */


#include <iostream>
using namespace std;
class Employee
{
   private:
      int a=0, b,c;
   public:
      int d , e;
      void setdata(int a1, int b1, int c1);  //declaration
      void getdata()
      {
          cout<<"The value of a is "<<a<<endl;
          cout<<"The value of b is "<<b<<endl;
          cout<<"The value of c is "<<c<<endl;
          cout<<"The value of d is "<<d<<endl;
          cout<<"The value of e is "<<e<<endl;
      }
};
void Employee :: setdata(int a1, int b1, int c1)  //defining  a function like this, proper syntax.
{   
    a = a1;
    b = b1;
    c = c1;
}
int main()
{ Employee pranjal;  //creating  an object of the class 
  //pranjal.a= 134;  // error as private members cannot be accessed using object.They can only be access from function.
     pranjal.d=20;   //we can access public members by object
     pranjal.e=3;
     pranjal.setdata(1,2,3);
     pranjal.getdata(); 

    return 0;
}