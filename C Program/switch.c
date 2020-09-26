#include<stdio.h>
int main()
{
    char a;
    printf("Enter your char:");
    scanf("%c",&a);
    switch(a)
    {   printf("hi");   // --> here warning displayed that the message will never be executed.
        case 'C':   //char bhi dal sakte hai but 'character' == ese dalna hoga 
        printf("the no. is 1\n");
        break;
        case 57: 
        printf("the no. is 2\n");
        break;
        default:
        printf("your no. is invalid!");

    }
    printf("%d",a);
    return 0;
}
// switch case me kabhi bhi variable declare nahi kar sakte, if done then error occurs.