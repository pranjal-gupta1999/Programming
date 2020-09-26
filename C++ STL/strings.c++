/* capacity function
   1.  capacity()  --> return capacity of string.it can be equal to or greater than the size of array.
   2.  length()  -->  return length of given string.
   3. resize(3)  -->resizes the length to 3 but not the capacity.  */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin>>s;
    cout<<s<<endl;
    getchar();
    getline(cin,s);
    cout<<s<<endl;
    s.push_back('d');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    cout<<"The capacity is "<<s.capacity()<<endl;
    cout<<"The capacity is "<<s.length()<<endl;
    s.resize(10);
    cout<<"The capacity is "<<s.capacity()<<endl; 
    cout<<"The capacity is "<<s.length()<<" "<<s<<endl;

    return 0;
}
/* string is a class in c++. to get 1 word we use just cin. For this we use the string header file.
in C we use fgets(pointer to char array,size,stdin) but in c++ with string data type we cannot use fgets().
Similarly we cannot use gets() function as it also have char array as args.
to get full sentence in c++ we use getline().
it also has 2 functions more namely 1. push_back('') --> it pushes one word into the sentence.
                                    2. pop_back()  -->it pulls out one word from the sentence.
unlike char array in c in which we cannot change the value of char array. with the use of string we can dynamically change.  */