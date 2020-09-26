#include <iostream>
using namespace std;
int c= 12;
int main()
{ 
    int a,b,c;
    cout<<"Enter no. 1"<<endl;
    cin>>a;
    cout<<"Enter no. 2"<<endl;
    cin>>b;
    c= a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;  //access global variable
  //  float d= 2.3; 
    float d= 2.3;
    float f= 3.2;  // if we already declared data type then we need not to write 2.3f or 3.2l
    long double e= 3.2; 
    //3.45;      .. if i want to pass a float value in function then by default compilor take it as double type.  So we write for float 3.45f , for long double -> 3.45l 
    cout<<(int)d<<endl;
    cout<<(float)a<<endl;  //notice here after type casting the value remains same (i.e int).This type of typecast is andhadhun.
   // to check whether a typecast is necessary or not we use    static_case <float> a

    cout<<d<<endl;
    cout<<e<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;  

  //  cout<<int(d)<<endl; //we can also write like this

    /*sizes are as follows:
       float = 4
       long= 8
       double= 8
       int = 4
       long double = 12
       char = 1
   */

  float x= 2.3f;
  float & y = x; //reference variable
  cout<<x<<" "<<y<<endl;  //same value
  cout<<&y<<endl;  //print address
    return 0;
}
/* Difference between reference vars and pointers in c++
   a pointer is a var that stores the address of other var.
   a reference var is just the another name for already existing var.
     1. a pointer can be initialised anytime but reference var needs to be initialised when declared. eg. int &p = a;
     2. a pointer can be reassigned but reference var cannot be reassigned.
     3. a pointer has its own memory address but reference var share the same memory address with original one.  */
