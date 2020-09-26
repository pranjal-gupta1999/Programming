#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int b,c=0;
 srand(time(NULL));
 int a= (rand()%10 + 1);
 printf("Number Generated! from 1 to 10\n");

 do
 {
 printf("Guess the no.!\n");
 scanf("%d",&b);
 
   if(b<a)
   {
       printf("The no. is greater than what you think!\n");
       c++;
   }
   if(a<b)
   {
      printf("The no. is smaller than what you think!\n");
      c++;  
   }
 } while (b!=a);
  if(a==b)
  {   
      c++;
      printf("Hurray! you have found the no. in %d attempt(s)",c);
  }  
    return 0;
}
