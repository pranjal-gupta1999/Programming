#include <iostream>
using namespace std;

class Test
{
   private:
      int count;

   public:
       Test(): count(5){}  //initialisation list

       void operator ++()   //this is syntax:    {{type}} operator + (void or any){}  where + is symbol and can be anything you wish
       { 
          count = count+1; 
       }
       void Display() { cout<<"Count: "<<count; }
};

int main()
{
    Test t;
    ++t;     // this calls "function void operator ++()" function
    t.Display();
    return 0;
}
//4 operators that cannot be overloaded are '::'(scope resolution) , '.'(member access operator) , '.*' and '?:'(ternary operator) 