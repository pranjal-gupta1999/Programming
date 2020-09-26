#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{    if(b==0)
             { throw b; }  //from here flow transfer to catch block if b=0.
            cout<<a/b<<endl;
       }
    catch(int ex)
    {
        cout<<"division by 0 is not possible!"<<endl;
    }
    return 0;
}
//catch block must be there after try block . Three keywords are try, catch and throw.