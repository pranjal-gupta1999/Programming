#include <stdio.h>
int main()
{
    int b;
    int a[]={1,2,3,4,9,5};
    for(int i=0;i<5;i++)
    {
       b= ((a[i]<a[i+1])? a[i+1] : a[i]);  //conditional operator
    }
    printf("The largest value is %d",b);
    return 0;
}
