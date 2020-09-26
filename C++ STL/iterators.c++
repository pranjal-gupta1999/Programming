//Iterators are used to point at the memory addresses of STL containers.These are special pointer that are used in complex data structures.
#include <iostream>
#include <iterator>  //for using iterators
#include <vector> //for using vector
/* Opeartions on iterators -->
           1. begin() -> returns iterator points to first element of vector.
           2. end() -> returns iterator points to 1 block after the last element of vector.
           3. next(ar1,ar2) -> returns new iterator .ar1 is the existing iterator and ar2 is no. of traversing in forward direction.
           4. prev(ar1,ar2) -> returns new iterator. ar1 is the existing iterator and ar2 is no. of traversing in backward(also counts the end() pointing block).
           5. advance(ar1,ar2) -> return void and similar to next().
           6. inserter(ar1,ar2)-> insert element at position . ar1 is the name of container and ar2 is the position of iterator where element is to insert.
                to insert the element we use copy(ar1,inserter(a,ptr)) -> ar1 are the elements to be inserted, for inserting full container we can use copy(v.begin(), v.end(), inserter(a,ptr)) */
using namespace std;
int main(int argc, char const *argv[])
{
     vector <int> v{1,2,3};
     for(auto it= v.begin();it!=v.end();it++)
     {
         cout<<*it<<endl;
     }
     cout<<"The size is "<<v.size()<<endl;
     vector <int> :: iterator ptr = v.begin();
     advance(ptr,1);
     cout<<*ptr<<endl;
     auto i = next(ptr,1);
     cout<<*i<<endl;
     vector <int> :: iterator it2 = v.end();
     auto i1 = prev(it2,2);
     cout<<*i1<<endl;
    return 0;
}
/* types of iterators -->
   1. Input iterator - weakest.can only read
   2. Output iterator - weak.can only write
   3. forward -high. can read and write but in forward direction
   4.bidirectional - higher.read ,write in forward and backward direction.
   5. random access - highest.allfeatures plus pointer add and subtract.
   
    */