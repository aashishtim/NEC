#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20];    
  printf("Enter string: ");    
  gets(str);

  printf("String is: %s",str);   
   
  printf("\nReverse String is: %s",strrev(str));    
 return 0;    
}    