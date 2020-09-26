#include <stdio.h>
int main()
{
//  label:
//      printf("you are in label\t");
//  goto end;
//      printf("Hello World");
//  goto label;                //use of goto statement is to break in(comes out from) multiple loops, also called jump statement.
//  end:
//    printf("this is the end");   
int a;
for(int i=0;i<4;i++)
{
    for(int j=0;j<3;j++)
    {
      printf("Enter the no.\n Press 0 to exit\n");
      scanf("%d",&a);
      if(a==0)
      {
          goto end;
      }
    }
}
 end:
    return 0;
}
