//upper bound return iterator just greater than the given element else return end() if not available.
//upper bound also works for sorted elements only.
#include <iostream>
#include <vector>
#include <algorithm>  //for upper bound
using namespace std;
int main()
{
    // vector<int> v{1,2,3,4,5};
    // auto it = upper_bound(v.begin(),v.end(),3);
    // cout<<*it<<endl;

     int a[]={1,2,3,4,5,6};
     int *ptr = upper_bound(a,a+6,4);
     cout<<*ptr<<endl;
    return 0;
}