#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector <int> v{1,2,3,4,5,6};
    make_heap(v.begin(),v.end()); //this heap function makes max heap by default.
    cout<<v.front()<<endl;
    make_heap(v.begin(),v.end(),greater<int>());  //use this to make min heap.
    cout<<v.front()<<endl;
    pop_heap(v.begin(),v.end(),greater<int>()); //first element gets pop out and next minimum element gets first position
    cout<<v.front()<<endl;
    cout<<v.size()<<endl; //size remains same.
    v[5]=0;   //if we push other element at its last position then it checks criteria, if it is smallest in min heap it gets first place.
    // if we put at other position it will not going to change the first place.
    push_heap(v.begin(),v.end(),greater<int>()); //but the vector size remains same.
    cout<<v.front()<<endl;
    cout<<v.size()<<endl;
    

    vector <int> v2{10,2,5,4,70};
    make_heap(v2.begin(),v2.end(),greater<int>());
    sort_heap(v2.begin(),v2.end(),greater<int>());  //sort in descending order 
    for(int i: v2)
    {
        cout<<i<<" ";
    }
    return 0;
}