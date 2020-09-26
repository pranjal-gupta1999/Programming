#include <iostream>
#include <string>
#include <stack>
using namespace std;
void rev(string s)
{
    stack <char> st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    while(st.empty() == false)
    {
        cout<<st.top();
        st.pop();
    }
}
int main(int argc, char const *argv[])
{
    string s;
    getline(cin,s);
    rev(s);
    return 0;
}
