/* There are 2 ways to pass arrys:
 1. passing arrays directly as a parameter to a fnction.
 2. passing the base address of array as a parameter.  

 1 method .

#include <stdio.h>
int  fun1(int array[])
{
    for(int i=0;i<4;i++)
    {
     printf("The value at index %d is: %d\n",i,array[i]);
    }
    array[0] = 12;
    return 0;
}
int main()
{
    int a[]= {1,2,3,4};
    printf("The value at index 0 is: %d\n",a[0]);
    fun1(a);  // if a[] the error
    printf("The value at index 0 is: %d\n",a[0]);
    return 0;
}
*/
 /* Here humne main fn se copy pass nahi kari hai, balki uska address hi pass kiya hai aur
 formal parameter pointers me convert ho jaate hai.
 ADVANTAGE:
            By this we can change the values in the array of main function (actual parameters)
            so a change in function also reflect the change in main()   */

 /* 2. method 

 #include <stdio.h>
 void fun1(int* ptr)
 {
  for(int i=0;i<4;i++)
    {
     printf("The value at index %d is: %d\n",i,*(ptr+i));//ptr[i] ese bhi likh sakte hai
    }  
    *(ptr + 1)= 22; 
 }
 int main()
 {  
    int a[]= {1,2,3,4};
    printf("The value at index 1 is: %d\n",a[1]);
    fun1(a);  // if a[] the error
    printf("The value at index 1 is: %d\n",a[1]);
    return 0;
 } 
      */

     //passing multi dimension array
     #include <stdio.h>
     void fun2(int ar[][2])
     {
         for(int i=0;i<2;i++)
         {
             for(int j=0;j<2;j++)
             {
                printf("The value at %d row of %d column is: %d\n",i,j,ar[i][j]);
             }
         }
         ar[0][1]=9;
     }
     int main()
     {
        int a[][2]= {{1,2},{7,3}};
        printf("The value at 0 row of 1 column is: %d\n",a[0][1]);
        fun2(a); 
        printf("The value at 0 row of 1 column is: %d\n",a[0][1]);
        return 0;
     }
     
 