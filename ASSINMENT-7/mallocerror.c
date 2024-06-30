#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ipt = malloc(sizeof(int) * 4); // Allocate memory for 4 integers
    if (ipt == NULL) { // Check if memory allocation was successful
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Print the addresses of the allocated memory
    printf("ipt: %p\n", (void*)ipt);
    printf("ipt inc 1: %p\n", (void*)(ipt + 1));
    printf("ipt inc 2: %p\n", (void*)(ipt + 2));
    printf("ipt inc 3: %p\n", (void*)(ipt + 3));
    printf("ipt inc 4: %p\n", (void*)(ipt + 4));
    printf("ipt inc 5: %p\n", (void*)(ipt + 5));

    free(ipt); // Free the allocated memory
    return 0;
}
//adress will be inceremetn by 4  byte cause of integer data type
