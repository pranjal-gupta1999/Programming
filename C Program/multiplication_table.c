#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no. to get multiplication table of:\n");
    scanf("%d",&a);
    printf("The table for %d:\n",a);
    for(int b=1;b<=10;b++)
    {
        printf("%d x %d =%d\n",a,b,b*a);
    }
    return 0;
}
