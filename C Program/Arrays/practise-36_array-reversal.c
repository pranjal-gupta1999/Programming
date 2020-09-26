#include <stdio.h>
void fun(int ar[])
{  printf("The array before reversal is\t");
    for(int i=0;i<=4;i++)
 {
    printf("%d\t",ar[i]);
 }
 printf("\n");
}
void swap(int ar[])
{
printf("The array after reversal is\t");
int temp;
for(int i=0;i<=4/2;i++)  // condition is half of size of array becoz if all the elements gets swapped in half case
{
   temp = ar[i];
   ar[i] = ar[4-i];
   ar[4-i] = temp;
}
 for(int i=0;i<=4;i++)
 {
   printf("%d\t",ar[i]);
 }
}
int main()
{
    int a[]={1,2,3,4,5};
    fun(a);
    swap(a);
    return 0;
}
