/* vectors provide dynamic allocation and also resizing it .they are also called arraylist.
 By default the the elements of the vectors are initialised with default values.
 we can also copy one vector to other. we can only perform push_back and pop_back functions only.*/ 
 #include <iostream>
 #include <vector>
 using namespace std;
 int main(int argc, char const *argv[])
 {
     vector<int> v1;
     v1.push_back(10);
     v1.push_back(5);
     v1.push_back(8);
     for(int i=0;i<v1.size();i++)
     {
     cout<<v1[i]<<" "<<v1.at(i)<<endl;
     }
     v1.push_back(11);
     v1[2] = 3;
     cout<<v1[3]<<" "<<v1.size()<<" "<<endl;
     cout<<v1[4]<< " " <<v1.at(4)<<endl;
     return 0;

     /* vector <int> v{1,2,3}  this is initialisation of vectors.
        for(int i:v)
        {
            cout<<v[i];
        } */
 }
 //we can also declare vector as vextor<int> v(5,20) ie 5 block having 20 in each
 /* v1.at() is used such that when we acces elements and above their sizes it will throw exception.
    On other hand v1[] when access above size gives garbage value.
    If one vector elemensts copied to other vector then write as -->
         v1{v2.begin(),v2.end()}   
    Similarly when there is array a[] = {1,2} and n = sizeof(a)/sizeof(a[0])  then we can declare vector in 
    vector <int> v(a,a+n)
    v[n]  simply gives garbage value if out of bounds. while v.at(n) gives exception outof bounds.
    length() ->  count no of elements in vector.
    capacity() -> memory space vector takes .it may differ on different compilors.
    erase() ->function particular elements ko delete krne ke liye.
    remove(n) -> it removes all instances related to n in a container. 
    */