#include <stdio.h>

int main() {
    int x = 5;
    int y = x++;  // Post-increment: x is used before it is incremented

    printf("x: %d\n", x);  // x is now 6
    printf("y: %d\n", y);  // y is 5

    return 0;
}
