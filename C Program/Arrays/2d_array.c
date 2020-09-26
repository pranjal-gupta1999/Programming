#include <stdio.h>
int main()
{
  int marks[2][3];  //or int marks[2][2]={{1,2},{2,3}}  yaha marks[][3] bhi likh skte the row ki value dalna zaruri nahi
  for(int a=0;a<2;a++)
  {
      for(int b=0;b<3;b++)
      {
          printf("Enter the no. you wish:");
          scanf("%d",&marks[a][b]);
      }
  }    
   for(int a=0;a<2;a++)
  {
      for(int b=0;b<3;b++)
      {
          printf("The no. at position %d row of %d column is: %d\n",a,b,marks[a][b]);
      }
      printf("\n");
  }    
    return 0;
}
