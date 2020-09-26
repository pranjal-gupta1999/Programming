#include <stdio.h>
int main()
{   while(1)
  {
    int a;
    printf("Press 0 to print triangular star pattern\nPress 1 for reverse triangular star pattern\nPress 2 to exit\n");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
        printf("The traingular star pattern is:\n");
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

        case 1:
        printf("The reverse traingular star pattern is:\n");
        for(int i=1;i<=4;i++)
        {
            for(int j=4;j>=i;j--)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

        case 2:
        goto end;

        default:
         break;
    }
    
  }
  end:
    return 0;
}
