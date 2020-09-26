#include <stdio.h>
#include <math.h>
int main()
{
    int a,b[20],i;
    printf("Welcome to decimal to binary conversion!\n");
    printf("Plz enter a decimal value\n");
    scanf("%d",&a);
    int c=a;
    for(i=0;c>0;i++)
    { 
     b[i]=c%2;
     c=c/2;
    }
    printf("The binary value of %d is: ",a);
    for(int j=i-1;j>=0;j--)  //j = i-1 isliye kiya hai kyoki condition unsatisfy hone se pehle hi increment ho chuka hai.
    {
        printf("%d",b[j]);
    }
    return 0; 
}