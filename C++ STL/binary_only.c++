#include <iostream>
using namespace std;
int main()
{
    int a[5],count=0,sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]!=1 && a[i]!=0){ exit(0); }
        else{ continue;}  
    }
    for(int i=0;i<5;i++)
    {
       if(a[i] == 1){count++;}
       if(a[i] == 0){sum =((sum<count)? (count) : (sum)); count=0;}
    } 
    sum =((sum<count)? (count) : (sum)); 
    cout<<sum<<endl; 
    return 0;
}