/* when the adddress of a function is passed as an argument of another funcion to call it again,we call it 
callback function.
function is called through function pointer.  */

#include <stdio.h>
int avg(int a,int b)
{
   return (a+b)/2;
}
void GreetAfternoon(int (*fptr)(int,int))
{
   printf("Good AFternoon!\n");
   printf("The average is %d\n",(*fptr)(2,6));
}
void GreetEvening(int (*fptr)(int,int))
{
   printf("Good Evening!\n");
   printf("The average is %d\n",(*fptr)(1,3));
}
int main()
{
 int (*ptr)(int ,int);
 ptr= &avg;
 GreetEvening(ptr);
 GreetAfternoon(ptr);
    return 0;
}
