//lower bound return iterator or pointer if it equal , if not equal, return element just greater than this,if greatest than all , return end().
//lower bound only works for sorted array. 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector <int> v{1,2,3,4,5,6};
    // auto it =lower_bound(v.begin(),v.end(),2);
    // cout<<*it<<endl;

    int a[]={1,2,3,4,5,6};
    int *ptr = lower_bound(a,a+6,4);
    cout<<*ptr<<endl;
    return 0;
}