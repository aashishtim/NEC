//Variables having an extern storage class has a global scope. Extern variables do not end until the program execution gets terminated.

#include <stdio.h>

int counter = 10; // Definition of counter VAR

void increment_counter() {
    counter++;
}

int main() {
    printf("Initial counter value: %d\n", counter);
    increment_counter();
    printf("Counter after increment: %d\n", counter);
    return 0;
}
