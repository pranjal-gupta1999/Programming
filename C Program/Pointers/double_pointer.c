/* double pointer is also called pointer to a pointer. One pointer holds the address of another pointer
After dereferencing the value we get is the value of which the first pointer pointing to its address.  */

#include <stdio.h>
int main()
{
  int a=5;
  int *ptr= &a;
  int **ptr1= &ptr;
  printf("The value of a is %d\n",a); 
  printf("The value of a is %d\n",*ptr);
  printf("The value of a is %d\n",**ptr1);
  printf("The address of ptr is %d\n",&ptr);
  printf("The address of ptr is %d\n",ptr1);     
    return 0;
}
