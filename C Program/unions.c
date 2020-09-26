/* union are exactly same as structures(user defined data type) the only difference is structure memebers have different memory
while union members work on shared memory that means sabhi members me se sirf ek member ko space milegi baaki ke output
garbage value hogi  but esa structures me nahi hota */


#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char name[34];
};
int main()
{
  union Student l1;
  l1.id=34;
  l1.marks=360;
  strcpy(l1.name,"harry");
  //l1.name ="harry";   //esa nahi kar sakte l1 sirf variable hai jo array ki value nahi le sakta
  printf("%d\n",l1.id);
  printf("%d\n",l1.marks);
  printf("%s",l1.name);
  return 0;
}
/* output me sirf name hi print hua baaki sabko garbage value mila but yahi structure hota to sabhi run hote */