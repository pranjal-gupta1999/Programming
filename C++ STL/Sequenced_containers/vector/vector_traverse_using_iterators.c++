#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=3 , k=10;
    vector <int> v1(n,k);  //this means k elements stored in n size.
    for(auto it= v1.begin();it!= v1.end();it++)  //instead of auto we can use vector<int> :: iterator it
    {
        cout<<*it<<endl;
    }
    v1[2] = 4;  //or v1.at(2) = 4;
    cout<<v1[2]<<" "<<v1.size()<<endl;
    return 0;
}
//begin() means starting memory address but end() represents 1 address after the last element.