#include <stdio.h>
#include <string.h>
int main()
{   int in;
    int b[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(b[i]==1)
        {
            in=1;
            continue;
        }

        else if(b[i]==2)
        {
            in=1;
            continue;
        }
        if(in==1)
        {
            printf("%d\n",b[i]);
        }
    }
    return 0;
}
