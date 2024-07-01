#include <stdio.h>

int main() {
    int x = 5;
    int y = ++x;  // Pre-increment: x is incremented before its value is used

    printf("x: %d\n", x);  // x is now 6
    printf("y: %d\n", y);  // y is also 6

    return 0;
}
