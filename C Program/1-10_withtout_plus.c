#include<stdio.h>
void show(int i)
{
    if(i==0)
    {
        return;
    }
    printf("%d\n\a",i);
    show(i-1);
}
int main()
{
   show(10); 
    return 0;
}
