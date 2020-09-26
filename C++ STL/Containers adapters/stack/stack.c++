#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<endl;
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
//stack have FILO property.
//they are called container adapters.it does not have front or back functions ,it has top().