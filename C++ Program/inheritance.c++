 /* concept of reusability is performed by inheritance in c++.
 The existing class is called Base class. and inherited class is called Derived class.
 There are 4 types of inheritance-->
 multiple, multilevel, heirarchial and hybrid.  
 SYNTAX-->
 class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private for derived class.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
 */
 #include <iostream>
 using namespace std;
 class A
 {             //private data ko kabhi bhi inherit nahi kar sakte.
     public:
     int a,b;
     A(int input)
     {
         a=input;
         b=13;
         cout<<a<<" "<<b<<endl;
     }
     A(){}  //to clear an error
 };
 class B : A{   //yaha by default A class ke default constructor ko call krta hai aur visibility mode default private hota hai.
   public:
     B(int x,int y)  //private members of class can be accessed using constructor, function and friend function(indirectly).
     {
         a=x,b=y;
         cout<<a<<endl;
         cout<<b<<endl;
     }  
 };
 int main()
 {
     A a1(2);
     B b1(4,5);
     return 0;
 }