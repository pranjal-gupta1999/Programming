/*There are 4 functions for dma. These are in stdlib library.
1. malloc()- also called memory allocation.
             stores a memory block with given amount of bytes.
             return void pointer so it needs to be typeacasted.
             the uninitialized block get garbage value.
             If space is insufficient, allocation fails and returns a NULL pointer.
             
2. calloc()- also called contiguous allocation.
             stores n no. of memory block with given amount of bytes.
             return void pointer so it needs to be typeacasted.
             the uninitialized block get o value.
             If space is insufficient, allocation fails and returns a NULL pointer.
             calloc takes takes more time than malloc().
             
3. realloc()- also called re allocation.
              used to change the size of array at run time  (single large memory block).
              the uninitialized block get garbage value.
              
4. free()- free the allocated memory that no longer needed (deallocation).  */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    // ptr= (int*)malloc(n*sizeof(int));   //this is malloc()   single memory
    ptr = (int *)calloc(n, 2*sizeof(int)); //this is calloc()     2 blocks memory

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d position\n", i);
        scanf("%d", &ptr[i]); // ptr[i] = *(ptr + i)
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d position is %d\n", i, ptr[i]);
    }

    printf("Enter the new size of array\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));   //this is realloc()   single block memory

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d position\n", i);
        scanf("%d", &ptr[i]); // ptr[i] = *(ptr + i)
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d position is %d\n", i, ptr[i]);
    }
    free(ptr);                     //this is free()

    return 0;
}