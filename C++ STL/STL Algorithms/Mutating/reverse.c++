#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v{10,20,30,40};
    reverse(v.begin(),v.end());
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    return 0;
}