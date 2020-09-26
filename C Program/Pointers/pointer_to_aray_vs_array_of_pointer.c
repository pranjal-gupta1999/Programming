#include <stdio.h>

int main()
{
    int a[]= {1,2,3,4,5};
 /*   int *p =a;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",p[i]); //p[i]= *(p+i)
        printf("%d\n",*(a+i));
        printf("%d\n",*(&a[i]));
        printf("%d\n",*(&a + i));
    }
 
    int *pr[5];   //array of pointer (jitne elements utne pointers.)
    for(int i=0;i<5;i++)
    {
      pr[i] = &a[i];   //we give each address to every pointers.
    }
    for(int i=0;i<5;i++)
    {
      printf("%d\t",*pr[i]);
    }
*/
 
    int (*ptr)[5] = &a;   //pointer to an array  we give address of the array
    for(int i=0;i<5;i++)
    {
      printf("%d\n",*( *ptr + i)); //dereference ptr gives address of a[0] on adding i it will shift to correspnding elements.
      printf("%d\n",*( ptr + i));//  in this ptr holds base address of array. since it point to whole array so on adding i we add by (4x no. of elements in array). 
      printf("%d\n",*(*(&a)));
      printf("%d\n\n\n",*(&a+i));
    }

  
    return 0;
}
