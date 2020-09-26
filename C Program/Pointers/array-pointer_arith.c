// &arr[0] =arr
#include <stdio.h>
int main()
{   int arr[] ={1,2,3,4,5};
    int* ptr = arr;
    printf("the address is %d\n",&arr[0]);
    printf("the address is %d\n",arr);
    printf("the address is %d\n",&arr[1]);    
    printf("the address is %d\n",&arr[0]+1);
    printf("the address is %d\n",arr + 1);

    printf("the value at address is %d\n",*(&arr[0]));
    printf("the value at address is %d\n",*(arr));
    printf("the value at address is %d\n",*(&arr[1]));    
    printf("the value at address is %d\n",*(&arr[0]+ 1));
    printf("the value at address is %d\n",*(arr + 1));
     //arr++    this will throw an error as this is constant
      ptr++;  // this wil run as it is pointer variable which can be increase or decrease.
     printf("The address is : %d\n",ptr);
     printf("The value is : %d",*ptr);
    return 0;
}
