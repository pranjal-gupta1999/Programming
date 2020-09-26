#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> v{1,2,3,4};
    cout<<v.front()<<" "<<v.back()<<endl;  
    v.front() =5;  // front() and back() are used to show first and last element of vector.
    v.pop_back();   // pick out one element from last.(filo)
    v.insert(v.begin(),20); //ar1 -> begin() or end() and traversing from this by adding into it, ar2 -> putting that value into it 
    v.insert(v.begin()+1,34);  // insert function baaki arrangement ko khiska deta hai.
    v.insert(v.begin()+2,2,70);  // ar1 , ar2 -> 2 times ie begin()+2 and begin()+3  , ar3
    v.erase(v.begin()); //erase that element
    v.erase(v.begin()+1);
    for(auto it =v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    v.erase(v.begin() , v.end() -1);  //erase all elements between both ar1 and ar2 except end()-1 element.(ar2 should left and all other erased)
     for(auto it =v.begin();it!=v.end();it++)
    {
        cout<<"The value after erasing is "<<*it<<endl;
    }
    cout<<"The size is "<<v.size()<<endl;
    v.resize(4,1);   //resize the vector and if any other element is empty , fill with default value of 1
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();    //clear all the element
    cout<<v.size()<<endl;
    if(v.empty()==true)
    {
        cout<<"It is Empty!"<<endl;
    }
    else{cout<<"Not Empty!"<<endl;}
    return 0;
}
//erase(), insert() and resize() have time complexity of O(n) while others have O(1).
//v1.swap(v2) swaps the vector element of v2 to v1 and also v1 to v2.
/*  toTal recall  ->   begin() ,end(), front(), back(), push_back() , pop_back(), size(), resize(),length(), capacity(),
                        insert() , erase(), clear(), empty() , v.reverse(), v.swap()*/