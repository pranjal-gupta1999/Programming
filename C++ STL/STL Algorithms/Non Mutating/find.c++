//find function is used  with all types of containers and return a pointer or iterator.Though all associative container have find() with them .
#include <iostream>
#include <list>
#include <algorithm>  //for find function
#include <vector>
using namespace std;
int main()
{
    // list<int> l{1,2,3,4,5};
    // auto it = find(l.begin(),l.end(),3);
    //   if(it==l.end()){cout<<"Not Found!"<<endl;}
    //   else{ cout<<"Found"<<endl;}


    // int a[]={1,2,3,4,5,6};
    // int *ptr = find(a,a+6,4);
    // if(ptr==(a+6))
    // {
    //     cout<<"Not Found!"<<endl;
    // }
    // else{ cout<<"FOUND AT "<<(ptr-a); }

    vector <int> v{1,2,3,4,5};
    auto it = find(v.begin(),v.end(),3);
    if(it==v.end()){cout<<"Not Found!"<<endl;}
    else{ cout<<"Found at "<<(it-v.begin())<<endl;}
    return 0;


}