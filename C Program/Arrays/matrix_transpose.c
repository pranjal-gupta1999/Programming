#include <stdio.h>
int main()
{  int a[3][3],m[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("The  element at a[%d][%d] is %d\n",i,j,a[i][j]);
            
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j] = a[j][i];
            printf("The element after transposing at a[%d][%d] is %d\n",i,j,m[i][j]);
        }
    }
    
    return 0;
}
