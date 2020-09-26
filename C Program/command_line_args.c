/* command line argument is used when we need to control our program in console.
argc(arg count) is the no. of args given to program .By default argc =1 as it count the name of program also.
argv(arg value) is a array of pointer  that stores the string type values
eg. .\a.exe harry me
  */

#include <stdio.h>
int main(int argc, char const *argv[]) 
{
    printf("The value of argc is %d\n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("The value at index no. %d is %s\n",i,argv[i]);
    }
    return 0;
}
