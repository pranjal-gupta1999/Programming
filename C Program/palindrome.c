#include <stdio.h>
int main()
 {
    int a, n, sum = 0, q;
    printf("Enter the no. \n");
    scanf("%d", &a);
    q= a;
    while (a> 0)
    {
        n = a % 10;
        sum = (sum * 10) + n;
        a = a / 10;
    }
    printf("The no. is: %d\n", sum);
    if (sum ==q)
    {
        printf("The no. is palindrome!");
    }
    else
    {
        printf("The no. is not palindrome!");
    }  
    

    return 0;
}
