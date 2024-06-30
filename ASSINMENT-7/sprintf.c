#include<stdio.h>  
int main() {  
  float num = 9.9;  
  printf("Before using sprintf(), data is float type: %f\n", num);  
  char buffer[50]; //for storing the converted string  
  sprintf(buffer, "%f", num);  
  printf("After using sprintf() data is string type: %s", buffer);  
}  

