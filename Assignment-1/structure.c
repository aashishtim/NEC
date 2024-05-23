#include<stdio.h>  
#include <string.h>  

struct employee                               //define the structure wuth structure name      
{   int id;      
    char name[50];      
    float salary;      
}e1,e2;                                      //declaring e1,e2 variables for structure    
int main( )    
{    

   //store first employee information    
   e1.id=101;    
   strcpy(e1.name, "Sonoo Jaiswal");             //copying string into char array    
   e1.salary=56000;    
    
  
   e2.id=102;                                     //store second employee information    
   strcpy(e2.name, "James Bond");    
   e2.salary=126000;    
     
   
   printf( "employee 1 id : %d\n", e1.id);        //printing first employee information    
   printf( "employee 1 name : %s\n", e1.name);    
   printf( "employee 1 salary : %f\n", e1.salary);    
    
       
   printf( "employee 2 id : %d\n", e2.id);        //printing second employee information
   printf( "employee 2 name : %s\n", e2.name);    
   printf( "employee 2 salary : %f\n", e2.salary);    
   return 0;    
}    