#include <stdio.h>

struct Details
{
    char a[10];
    int m;
};
int main()
{
  struct Details p= {"harry",12};
  struct Details *ptr = &p; 
  
  printf("Name is %s\n",ptr->a);
  printf("No. is %d\n",ptr->m);
  
    
    return 0;
}
