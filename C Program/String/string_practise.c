#include <stdio.h>
void fun(char* pt)
{
   for(int i=0;i<=3;i++)
   {
    printf("%c",pt[i]);
   }
}
int main()
{  // char tim[];  this will give an error , in actual parameter we need to define the size of array in declaration
      // but in formal parameter we need not to specify the size of array.
      char go[10];  
      gets(go);
      puts(go);
    char ar[]= {'h','a','r','i','\0'};  //this declaration is allowed.
    fun(ar);
    return 0;
}
