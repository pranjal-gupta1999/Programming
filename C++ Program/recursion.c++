#include <iostream>
using namespace std;
int fun(int a)
{
    if(a<=1)
    {
        return 1;
    }
   return a* fun(a-1);
}

int fun2(int a)
{
    if(a==1||a==2)
    {
        return a-1;
    }
    
    return fun2(a-1) + fun2(a-2);
}

int fun3(int n)
{
    int a=0,b=1,c;
    for(int i=0;i<n-1;i++)  //n-1 as we have already declare 1st element i.e a=0
    {
         c= a+b;
         a=b;
         b=c;
    }
    return a;
}
int main()
{  int z,y;
    cout<<"Enter a no."<<endl;
    cin>>z;
    cout<<"The factorial of "<<z<<" is "<<fun(z)<<endl;
    cout<<"Enter a no. at which you want fibionacci"<<endl;
    cin>>y;
    cout<<"The fibonaaci gives "<<fun2(y)<<" at position "<<y<<endl;
    cout<<fun3(y)<<endl;
    return 0;
}