#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "gfg";
    str = str + "geeks";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    cout<<str.substr(1,3)<<endl; //returns string character from position 1 to 3
    int res = str.find("geeks"); //if found returns position of first string character else garbage value.
    if(res == string::npos)
    {
        cout<<"Not Found!!"<<endl;
    }
    else{ cout<<"Found at position no. "<<res<<endl;}

    for(auto it = str.begin();it!=str.end();it++)  //string can also be print in this way(including spaces).
    {
        cout<<*it;
    }
    return 0;
}