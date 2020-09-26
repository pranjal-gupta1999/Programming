#include <stdio.h>   
int swap(int a,int b)  // a and b are called formal parameters.
{
    a=a+b;
    b=a-b;
    a=a-b;
   printf("The value of a and b are: %d %d\n",a,b);
}
int main()
{
 int x=4,y=6;        //x and y are called actual parameters.
 printf("The value of x and y are: %d %d\n",x,y); 
swap(x,y);
printf("The value of x and y are: %d %d\n",x,y);
 return 0;
}