#include <stdio.h>
struct Details
{
   char name[30];
   char license[20];
   char route[30];
   int kms;

};
int main()
{  int i;
  printf("Welcome to the travel agency\n");
  printf("Please enter the no. of drivers\n");
  scanf("%d",&i);
struct Details a[i];    //passing array
  for(int m=0;m<i;m++)
  {
    
    printf("Please enter your name of driver %d\n",m+1);
    scanf("%s",a[m].name);

    printf("Please enter your license of driver %d\n",m+1);
    scanf("%s",a[m].license);

    printf("Please enter your route of driver %d\n",m+1);
    scanf("%s",a[m].route);

    printf("Please enter your kms of driver %d\n",m+1);
    scanf("%d",&a[m].kms); 

    printf("Details of driver no. %d\n Name: %s\n License: %s\n Route: %s\n kms: %d\n",m+1,a[m].name,a[m].license,a[m].route,a[m].kms);       
  }
    return 0;
}