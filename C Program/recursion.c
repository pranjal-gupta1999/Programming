//Recursion defines as function calling thecopy of itself.Any problem can be solved either recursively or iteratively(loops).
//factorial using recursion
//the case at which function doesnt recur is called base case.
//a termnation condition is used to stop the execution.
#include <stdio.h>
int fact(int a)
{
    if(a==0||a==1)
    {
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main()
{   int b;
    printf("Enter the no. you want factorial of\n");
    scanf("%d",&b);
    printf("The Factorial of %d is %d",b,fact(b));
    
    return 0;
}
