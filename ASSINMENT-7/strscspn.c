// To demonstrate how strcspn() works in C  
#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
  
    int size;  
  
    // initializing strings  
    char str1[] = "sashsih";  
    char str2[] = "mayfair";  
  
    // Using strcspn() to determine the beginning characters before the first matching character produces 3  
    size = strcspn(str1, str2);  
  
    printf("The unmatched characters before first matched character : %d\n", size);  
}  