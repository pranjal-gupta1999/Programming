/*using the uninitialised pointers (int * ptr;) leads to unwanted address stored and the value related to it.Sometimes
the address is imaginary so we may not get the value.
The solution to it is NULL pointer.
advantage--
  1. used in error handling to check whether pointer hold any address or not.
  2. initialise a pointer which is currently not holding the address as
     uninitialised pointer are pretty dangerous for the  program..afterwards we can change it.
     NULL is a macro   as ((void *)0)
     
     eg. fun(char st[20], char* p)
        {
                 p=NULL;
        }
        Here default p holds address of st string .to avoid we use null.
      */

#include <stdio.h>
int main()
{

  //int* ptr =0 ;  here 0 is pointer-context not an integer.
  int * ptr= NULL;
  printf("%d\n",sizeof(NULL));   //null is a special pointer so size of pointer is equal to size of null
  printf("%d\n",sizeof(void));   //void have 1 byte.
  printf("%d",ptr);   
  printf("%d",*ptr); //the value could be diiferent as per ide.
   
    return 0;
}
