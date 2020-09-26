#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char  *argv[])  // char *ptr[] is an array pointer
{   
    char* operation;
    int n1,n2;
    operation = argv[1];
    n1= atoi(argv[2]);
    n2= atoi(argv[3]);
   if(strcmp(argv[1],"add")==0)
   {
       printf("%d",n1+n2);
   }
   if(strcmp(argv[1],"subtract")==0)
   {
       printf("%d",n1-n2);
   }
   if(strcmp(argv[1],"multiply")==0)
   {
       printf("%d",n1*n2);
   }
   if(strcmp(argv[1],"divide")==0)
   {
       printf("%d",n1/n2);
   }
    return 0;
}
