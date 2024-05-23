//Declaration of a function pointer
// sytnax::return type (*ptr_name)(type1, type2…); 
//float (*fp) (float);   *fp is a pointer that points to a function that returns a float value 
//float (*fp) (int , int);    // Declaration of a function pointer.  
//float func(int , int);      // Declaration of a function.       

#include <stdio.h>  
int add(int,int);  //Declaration of a function

int main()  
{  
   int a,b;  
   int (*ip)(int,int);  // Declaration of a function pointer.   

   int result;  
   printf("Enter the values of a and b : ");  
   scanf("%d %d",&a,&b);  

   ip=add;  // Assigning address of func(add) to the ip pointer.

   result=(*ip)(a,b);     //  Calling a function using function pointer.  


   printf("Value after addition is : %d",result);  
    return 0;  
}  
int add(int a,int b)  //  // Declaration of a function with return argument
{  
    int c=a+b;  
    return c;  
}  