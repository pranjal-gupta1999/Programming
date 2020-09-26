// new keyword dynamically memory allocate krta hai. delete keyword usse free karta hai.
#include <iostream>
using namespace std;
int main()
{
    int a=5;
    int * p = &a;
    cout<<"The value is "<<*p<<endl;
    int * ptr = new int(4);  //dynamically allocate variable of value 4.
    cout<<"The value is "<<*ptr<<endl;
    int * arr = new int[3];  //dynamically alloacte new array of size 3.
    arr[0]= 1;
    *(arr+1)= 2;
    arr[2]= 3;
    delete arr;  // free the space 
    cout<<arr[0]<<endl
        <<arr[1]<<endl
        <<arr[2]<<endl;
    return 0;
}
/* int a = new int(4) ye nahi allowed hai. new keyword sirf pointer ke saath hi lagega. Delete keyword me arg int hi 
hona chahiye (no pointer). c++ me array stck me store hota hai.usse dynamic banane ke liye new keyword use karte hai.  */