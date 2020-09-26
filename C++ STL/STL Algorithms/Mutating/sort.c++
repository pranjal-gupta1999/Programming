//sort() is used in those conatiners which have their random access of the elements. eg . array,vector, dequeue.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int mycmp(int a ,int b)
{
    return a>b;  //if write a<b then no change
}
int main()
{
    vector <int> v{1,10,2,31,7,20,0};
    sort(v.begin(),v.end());
    for(auto it : v)
{
    cout<<it<<" ";
}
cout<<endl;
    sort(v.begin(),v.end(),greater<int>());  //instead of greater<int>() we can use user defined function like mycmp
     for(auto it : v)
{
    cout<<it<<" ";
}
    return 0;
}