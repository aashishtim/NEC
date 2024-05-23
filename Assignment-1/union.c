#include <stdio.h>


union Data   // Define a union that can hold either an integer, a float, or a string
{     
    int i;
    float f;
    
};

int main() {
   
    union Data data;   // Create an instance of the union

    data.i = 10;
    printf("data.i: %d\n", data.i);

    
    data.f = 220.5;             // Store a float in the union and print it
    printf("data.f: %f\n", data.f);

   
    return 0;
}
