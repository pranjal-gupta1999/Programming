#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector <int>v{10,20,30,40};
    vector <int>v1{2,1,40,22,15};
    vector <int> v3(9);  //this time we need to specify its size else we'll note get the elements.
    merge(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());  //this function merged the elements in sorted form(ascending).
    for (auto it : v3)
    {
        cout<<it<<" ";
    }
    return 0;
} 