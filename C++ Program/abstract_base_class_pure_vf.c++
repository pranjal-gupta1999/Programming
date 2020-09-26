/* abstract class esi class jise baaki sari classes inherit karti ho aur unke object bane ya fir iske pointer banke baaki to point kare
abstract base class me kam se kam ek vitual function to hona hi chahiye.

pure virtual funcion - jo base class me kuch na kare aur derived class me define karna hi hai, esa nahi krne par
derived class bhi abstract ban jayegi. aur usse redefine karne ki  zarurat na pade.  */
#include <iostream>
using namespace std;
class Base
{
  public:
     int a;
    virtual void display(int a1)=0;  // do - nothing function  or pure virtual function
};
class Derived : public Base{
    public:
        void display(int a1)  //defining function in derived class
        {
            a = a1;   
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    Base *ptr = new Derived;
    ptr->display(3);
    return 0;
}

//difference between virtual function and pure virtual function
// virtual function me base aur derived dono classes me define karna padta hai. but pure virtual function me base class me hum declare karte hai
// baki derive class me define karte hai.