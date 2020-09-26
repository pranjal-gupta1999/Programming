#include <iostream>
using namespace std;
class B;
class A
{
  public:
     void show(B b);
};
class B
{
  int x=0;
  public:
    friend void A :: show(B b);  //jis class ke member ko access karna hai usi class me friend fn declare karna hai aur argument me bhi wahi class ke object honge. 
};
void A :: show(B b)
     {
       cout<<"The value is "<<b.x<<endl;
     }
int main()
{
  A a1;
  B b1;
  a1.show(b1);
  return 0;
}
//YEH BAHOT KATHIN HAI.