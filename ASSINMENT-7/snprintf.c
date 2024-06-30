// C program to demonstrate snprintf()
#include <stdio.h>

int main()
{
	char buffer[50];
	char* s = "aashishtimalsina";

	
	
	printf("Writing %s onto buffer" // Counting the character and storing  // in buffer using snprintf
		" with capacity 6",
		s);
	int j = snprintf(buffer, 6, "%s\n", s);

	// Print the string stored in buffer and
	// character count
	printf("\nString written on "
		"buffer = %s", buffer);
	printf("\nValue returned by "
		"snprintf() method = %d\n", j);

	return 0;
}

/output:
//Writing aashishtimalsina onto buffer with capacity 6
//String written on buffer = aashi
//Value returned by snprintf() method = 17