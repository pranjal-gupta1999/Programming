#include <stdio.h>
void addsub(int* a,int* b) //formal parameters(pointers)
{  
    int temp;
   temp = *a + *b;
   *b = *a - *b;
   *a= temp;
    return;
}
int main()
{ 
    int x=1,y=2;  // x and y are actual parameters.
    printf("The value of x and y are: %d %d\n",x,y);
    addsub(&x,&y);
    printf("The value of x and y are: %d %d",x,y);
    return 0;
}