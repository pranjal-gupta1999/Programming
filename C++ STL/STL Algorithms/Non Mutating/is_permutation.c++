#include <iostream>
//is permutation function is used to compare two containers to check if there are same elements or not irrespective of thier arrangement.
//if condition is true they return 1 else 0.
//they can be use to check if two strings are anagram of each other or not.
#include <vector>
#include <algorithm>  //for is_permutation
using namespace std;
int main()
{
    vector <int> v1{1,2,3,4,5,6};
    vector <int> v2{1,4,5,3,6,2};
    if(is_permutation(v1.begin(),v1.end(),v2.begin()))
     { cout<<true;}
     else
     {
         cout<<false;
     }
     
    return 0;
}