#include <iostream>
using namespace std;
class Complex
{
   int a,b;
   public:
     void setdata(int v1 , int v2)
     {
         a= v1;
         b= v2;
     }

     void printdata()
     {
         cout<<"The value is "<<a<<"+"<<b<<"i"<<endl;
     }

     friend Complex setsum(Complex o1, Complex o2);  //friend declare kiya hai iska matlab ye nahi ki ye function ab class ka member ban gaya
};
Complex setsum(Complex o1, Complex o2)  //friend function class ke bahar
{
  Complex o3;
  o3.setdata((o1.a + o2.a),(o1.b + o2.b));  //private member ko access kar raha hai
  return o3;
}
int main()
{
    Complex c1,c2,sum;
    c1.setdata(1,3);
    c1.printdata();
    c2.setdata(3,4);
    c2.printdata();
    //c2.setsum(c1,c2)  error as this function is not in class 

    sum= setsum(c1, c2);
    //we can also call by     setsum(c1,c2);
    sum.printdata();
    return 0;
}

/* Properties:
            1. friend func. usually have class object as argument.
            2. it can be called directly from main func. eg sumset(c1,c2); 
            3. we cannot call from class object as this func is not part of class.
            4. friend func can access private and public members of class.
            5. it needs to be declare outside from the class
            6. friend func can have any return type (including void).
            7. if A is friend of B then it is not necessary that B is friend of A.     */