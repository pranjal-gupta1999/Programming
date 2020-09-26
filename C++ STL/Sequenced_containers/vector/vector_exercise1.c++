#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
vector<int> sorting(int a[],int k,int n)
{
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        if(a[i]<k)
        v.push_back(a[i]);
    }
    cout<<"The size of vector is "<<v.size()<<endl;
    return v;
}
int main(int argc, char const *argv[])
{
    int a[]={8,100,20,40,3,7};  //given the array. we need to find all element in vector which are less than k and print them in same order.
    int n = sizeof(a)/sizeof(a[0]);
    int k =10;
    vector <int> v = sorting(a,k,n);
    for(int i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}

