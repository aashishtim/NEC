#include <stdio.h>  
float add(float,int);  
float sub(float,int);  
float mul(float,int);  
float div(float,int);  // line 2,3,4,5 are function ddefine 
int main()  
{  
    float x;              // variable declaration.  
    int y;  
    float (*fp[4]) (float,int);        // function pointer declaration.  
    fp[0]=add;              // assigning addresses to the elements of an array of a function   pointer.  
    fp[1]=sub;  
    fp[2]=mul;  
    fp[3]=div;  
    printf("Enter the values of x and y :");  
    scanf("%f %d",&x,&y);  

  float r=(*fp[0]) (x,y);        // Calling add() function.  
    printf("\nSum of two values is : %f",r);

     r=(*fp[1]) (x,y);             // Calling sub() function.  
    printf("\nDifference of two values is : %f",r);  

      r=(*fp[2]) (x,y);                // Calliung sub() function.  
    printf("\nMultiplication of two values is : %f",r);  

     r=(*fp[3]) (x,y);                // Calling div() function.  
    printf("\nDivision of two values is : %f",r);  
    return 0;  
}  
  
float add(float x,int y)  
{  
    float a=x+y;  
    return a;  
}  
float sub(float x,int y)  
{  
    float a=x-y;  
    return a;  
}  
float mul(float x,int y)  
{  
    float a=x*y;  
    return a;  
}  
float div(float x,int y)  
{  
    float a=x/y;  
    return a;  
}  