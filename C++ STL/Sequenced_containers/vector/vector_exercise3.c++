#include <iostream>
#include <algorithm> //for using sort , reverse etc.
#include <vector>
using namespace std;
void sorting(int arr[],int n)
{
   vector < pair<int,int> > v;
   for(int i=0;i<n;i++)
   {
       v.push_back(make_pair(arr[i],i));
   }
   cout<<"The size is "<<v.size()<<endl;
   sort(v.begin(),v.end());  //similarly reverse(v.begin(),v.end()) for descending order after using sort function.
   cout<<"After sorting gives "<<endl;
   for(auto it :v)
   {
       cout <<it.first<<" "<<it.second<<endl;//here we do not dereferenced the iterators because when we call element from first and second it automatically call it.
   }
   
}
int main(int argc, char const *argv[])
{
    int arr[] = {20,40,30,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    sorting(arr,n);
    return 0;
}
