#include <stdio.h>
int show()
{
  int a=5;
  return a; 
}
int main()
{
  int d=  show();
    int b=6;
    printf("The sum is: %d",d+b);  //jab bhi function se value leni ho to uska return type define karna hoga otherwise error display hoga
    return 0;
}
