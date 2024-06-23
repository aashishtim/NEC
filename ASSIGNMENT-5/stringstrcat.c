// C Program to illustrate the strcat function 
#include <stdio.h> 

int main() 
{ 
	char dest[50] = "AASHSIH"; 
	char src[50] = " TIMALASINA"; 

	printf("dest Before: %s\n", dest); 

	// concatenating src at the end of dest 
	strcat(dest, src); 

	printf("dest After: %s", dest); 

	return 0; 
}
