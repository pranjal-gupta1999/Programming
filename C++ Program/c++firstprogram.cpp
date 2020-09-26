#include <iostream>
using namespace std;
int main()
{  int s,d;
    int $a=5;
    bool t= true;
    cout<<"Hello World\n"<<$a<<"\t"<<t<<"\n";   //\n is equla to endl
    cout<<"Enter the no.\n";
    cin>>s;
    cout<<"Enter the no.\n";
    cin>>d;
    cout<<"The sum is "<<s+d;
    cout<<"The value of $a++ "<<$a++<<endl;
    cout<<"The value of $a-- "<<$a--<<endl;
    cout<<"The value of --$a "<<--$a<<endl;
    cout<<"The value of ++$a "<<++$a<<endl;

    
    return 0;
}
 /*  Namespaces were introduced into C++ to resolve identifier name conflicts. 2 same name ke identifiers ho skte hai
 Keywords - vars which is already defined in compilors
 identifiers - user defined vars. There are 63 identifiers.
 In c vars can have either alphabets or $ , * , _  only at beginning. In c++ we can have alpha , $ , _ only at begin
 
 variable are container to store data.

data  types- 
in built eg int,float
user defined - eg. struct , union, enum
derived- array, pointer, function */
