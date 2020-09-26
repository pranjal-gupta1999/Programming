#include <iostream>
using namespace std;
inline int fun(int a, int b)  //  <-- this is inline function
{
    return a+b;
}

int fun2(int call, int add=0)  //   <-- this is default argument
{
    return call+add;
}
int main()
{
   int a=5,b=6; 
   cout<<"The sum is "<<fun(a,b)<<endl;
   cout<<"The sum is "<<fun2(a)<<endl;
    return 0;
}
/* Inline functions are used to reduce time .
   A functin is made inline only if it has small programs(code).
   jab hum functions ko call kte hai , tab hum value ki copy bhejte hai ,fir function me jake code execute hota hai.
   inline function me hum function call nahi krte balki wahi function compile time par paste ho jata hai. 
   
   A default argument is such that if we dont call it ,but it would have a initial value in arguments
   But if we give the value , the value gets into it.
   in arguments , a default argument should always be put afterwards.
   
   A constant argument is generally used with pointers and arrays. The value of const arg does not change.
It is a request to compilor to make function inline, not always it makes inline.  */