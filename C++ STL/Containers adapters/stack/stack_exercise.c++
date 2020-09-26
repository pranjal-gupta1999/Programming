#include <iostream>
#include <forward_list>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
    forward_list <int> f1{10,20,30};
    stack <int> s;
    //f1.reverse();   //1 way
    for(auto it : f1)  // other way
    {
       s.push(it);  
    }
    while(s.empty()== false)
    {
       cout<<s.top()<<" ";
       s.pop();  
    }
    return 0;
}
