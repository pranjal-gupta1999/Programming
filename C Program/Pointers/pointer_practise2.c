/*    #include <stdio.h>
int main()
{ 
    int a=5;
    int* ptr= &a;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    return 0;
}
 
 //from here we can conclude that &a= ptr(address), a=*ptr(value) and &ptr is address of itself.
 */

#include <stdio.h>
int main()
{ 
    int a[]={1,2,3};
    int* ptr= a;     //we cannot write &a as it is array and a=&a[0]
    printf("%d\n",a);
    printf("%d\n",ptr);  // ptr = &a[0] = a = &ptr[0] = &a   
    printf("%d\n",&a[0]);
    printf("%d\n",&ptr[0]);   //internally  ptr[i]= *(ptr + i) 
    printf("%d\n",&(*(ptr+0)));
  //  printf("%d\n",&(ptr+0));   it will give error , not possible
    printf("%d\n",&a);     // &a[0] is equal to &a
    printf("%d\n",&ptr);      // this time &ptr is not equal to &ptr[0]

/* 3 rules to remember in array
      1.yadi humare paas address ho aur index bhi ho to usse hum value nika skte hai.
      2.address( pointer type) aur dereference operator (*) se bhi value nikal sakte hai.
      3. value aur reference operator(&) se address nikal sakte hai.
*/
    
    printf("%d\n",a[0]);
    printf("%d\n",ptr[0]);  //a[0] = *ptr = ptr[0]
    printf("%d\n",*(ptr+0));
    return 0;
}  

/* #include <stdio.h>
int main()
{ 
    char a[]="harry";
    char* ptr= a; 

    printf("%c\n",a[5]);   //it is clearly showing that string has null character and size = (size of char) + 1
    printf("%c\n",a[0]);
    printf("%c\n",ptr[0]);  //a[0] = *ptr = ptr[0]
    printf("%c\n",*(ptr+0));
        return 0;
}   */