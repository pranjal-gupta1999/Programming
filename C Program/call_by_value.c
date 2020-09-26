#include <stdio.h>
int m=0;   // m is global variable.
int add(int a,int b)  // a and b are called formal parameters.
{
  int n=m;      // n is local variable
    return a+b;
}
int main()
{
 int x=4,y=6;        //x and y are called actual parameters.
 printf("The value of x and y are: %d %d\n",x,y);
 int d= m;  
 printf("The addition of x and y is: %d",add(x,y));
 return 0;
}
 
/* call by value me call karte time hum actual parameters nhi send kar rahe, balki hum uski copy send 
kar rahe hai formal parameters ko ... islye agar hum formal parameters par changes karenge to fir
actual parameters par koi effect nahi hoga. */