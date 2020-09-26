#include <stdio.h>
int main()
{  int a[3][3],b[3][3],sum[3][3];
    printf("Enter elements of 1st matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the element at a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the element at b[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("The elements of 1st matrix are\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("The element at a[%d][%d] is %d\n",i,j,a[i][j]);
        }
    }

    printf("The elements of 2nd matrix are\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("The element at b[%d][%d] is %d\n",i,j,b[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("The element at sum[%d][%d] is %d\n",i,j,sum[i][j]);
        }
    }

    return 0;
}
