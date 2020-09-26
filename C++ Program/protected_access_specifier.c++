#include <iostream>
using namespace std;
class A
{
    protected:
       int id=7;
};
class B : private A{
   private:
       void show(int a);
   public:
       void deshow(int b);
    // B(int a)
    // {
    //    id = a;
    //    cout<<a<<endl;
    // }
};
void B :: deshow(int b)
{  
     show(b); //security enhancing
}
void B :: show(int a)
{   id=a;
   cout<<id<<endl;
}
int main()
{
    B b;
    b.deshow(3);
    return 0;
}
/* protected keywords are similar to private keyword.The only difference is that they are inaccesible from outside 
i.e main class  but are accessible to the derived class next to it(a single time).

Base class    private derivation       protected derivation         public derivation

private       not inherit                not inherit                 not inherit
protected     private                    protected                   protected
public        private                    protected                   public                  */