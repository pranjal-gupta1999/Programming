#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
 //   int *ptr =&a; ese likhenge to warning dispaly hogi.
    int *ptr=a;  //ptr point to the 0th element address. as a=&a[0]

    int (*ptr1)[5] = &a; //this is pointer to an array, points to whole array and address of array defined by the base address( 0th element address).
    int *ptr2[5]; //this is array of pointers

    for(int i=0;i<5;i++)
    {
       ptr2[i] = &a[i];  //array of pointer har index ka address leta hai(har ek pointer ek address ko point kar raha hai)
       printf("%d\n",*ptr2[i]);  //dereference se address change ho raha hai value me.
    }

    printf("The address of 0th element is %d\n",a);  //as a= &a[0]
    printf("The address of 0th element is %d\n",&a); //since whole array address points to base address (0th element address)
    printf("The address of 0th element is %d\n",&a[0]);
    printf("The value of ptr is %d\n",ptr);
    printf("The value of ptr1 is %d\n",ptr1); 
    printf("The address of 0th element is %d\n",&ptr[0]); // as &ptr[0] = &(*(ptr + 0))
    printf("The address of 0th element is %d\n",&ptr1[0]);   
   
   
    printf("The value of 0th element is %d\n",a[0]); 
    printf("The value of 0th element is %d\n",ptr[0]);// as ptr[0] = *(ptr + 0)
    printf("The value of 0th element is %d\n",ptr1[0]);  //this will return address as 1st derefernce only brings base address to 0th element address   
    
    printf("The value of 0th element is %d\n",*ptr1[0]); //so we need to twice dereference pointer to an array to get value
    printf("The value of 0th element is %d\n",*ptr);
    printf("The value of 0th element is %d\n",**ptr1);  



    printf("The sizes are : %d\n",sizeof(a));
    printf("The sizes are : %d\n",sizeof(ptr));  // all pointers have default size of 4
    printf("The sizes are : %d\n",sizeof(ptr1)); 
    printf("The sizes are : %d\n",sizeof(*ptr)); // we get the element whose size is 4
    printf("The sizes are : %d\n",sizeof(&a[0]));  //address ki bhi uske value type jitni hoti hai
    printf("The sizes are : %d\n",sizeof(*ptr1)); // we still get address and it is refer to array so size of array .
    printf("The sizes are : %d\n",sizeof(**ptr1)); //we get the element whose size is 4

    //printf("The sizes are : %d\n",sizeof(&a[0]));
    printf("The value of 1st element is %d\n",*(*ptr1 + 1));    //here 1st dereference we get 0th element address , now shfting 1 block and then dereference to get value. 
     // **ptr1 = *(*ptr1 + 0)

    ptr++; ptr1++;  // ptr1++ = ptr1 + 1 = address + ( 1 x 4 x (no. of element in array)  ).
    
    printf("The value of 1st element is %d\n",a[1]);
    printf("The value of 1st element is %d\n",*ptr);  // ptr shift 1block 
    printf("The value of 1st element is %d\n",**ptr1);  //after shifting 5 blocks we cannot get value so it only holds address.

    printf("The new address is %d\n",a+ 1); // a +1 = ptr +1
    printf("The new address  is %d\n",&a+1); // &a +1 = ptr1 + 1
    printf("The new value of ptr is %d\n",ptr);  // ptr will shift 1 block and 1 block size is 4bytes(int) so address increased by 4. 
    printf("The new value of ptr1 is %d\n",ptr1); //ptr1 will shift whole 5 blocks together hence increased by 20 bytes.

    
    return 0;
}
