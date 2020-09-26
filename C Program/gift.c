#include<stdio.h>
int main()
{    int a,b;
    printf("You have passed in the following subjects:\n");
    printf("1 -> True    0-> False\n");
    printf("Mathematics: ");
    scanf("%d",&a);
    printf("Science: ");
    scanf("%d",&b);
    if(a&&b)
    {
        printf("You are awarded with rs45");
    }
    else if(a||b)
    {
        printf("You are awarded with rs15");
    }
    else{
        printf("Sorry you didnt earn any reward!");
    }
   
    return 0;
}
