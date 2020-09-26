#include <stdio.h>
void swap(int* a,int* b) //formal parameters(pointers)
{
   int temp;
   temp= *a;
   *a= *b;
   *b= temp;
   return;
}
int main()
{ 
    int x=1,y=2;  // x and y are actual parameters.
    printf("The value of x and y are: %d %d\n",x,y);
    swap(&x,&y);
    printf("The value of x and y are: %d %d",x,y);
    return 0;
}

/* call by reference me hum actual parameters ko send nahi kar rahe balki hum unke address ki copy 
  send kar rahe hai formal parameters ko ... fir usko * ki help se dereference karke usse value 
  le rahe hai ... isliye formal parameter par koi bhi change actual parameters ko bhi change karega. */