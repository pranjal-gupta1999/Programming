#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int a=3;
    int b= 2222;
    cout<<a<<endl;
   // a+= 4; it will show error as a is constant  
    cout<<a<<endl;
   cout<<"The value of a before setw is "<<a<<endl;
   cout<<"The value of b before setw is "<<b<<endl;
   cout<<"The value of a before setw is "<<setw(4)<<a<<endl;   //setw(4) means right shift 4 places output.
   

   //operator precedence
   int c=2,l=7;
   int q= ((((c*l)+45)-87)+3);
   cout<<q<<endl;
   //check operator precedence table , if operators are at same level then see the associativity and then add ()'s.
    return 0;
}
//manipulators --> There are 2 types of manipulators endl & setw().