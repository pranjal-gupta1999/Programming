#include <iostream>
#include <algorithm>  //for sort function
using namespace std;
void sorting(int a[] , char b[], int n)
{
    pair<int ,char> pa[n];  //forming a pair array.
    for(int i=0;i<n;i++)
    {
        pa[i]={a[i] , b[i]};
    }
    sort(pa,pa+n);   //sort function is in algorithm header file. similarly we have reverse(pa,pa+n);
    cout<<"The sorted form is: ";
    for(int i=0;i<n;i++)
    {
        cout<<pa[i].second<<" ";
    }
}
int main()
{
    int a[]={1,5,2,7},n;
    char b[]={'X','Y','E','J'};
    n= sizeof(a)/sizeof(a[0]);
    sorting(a,b,n);
    return 0;
}