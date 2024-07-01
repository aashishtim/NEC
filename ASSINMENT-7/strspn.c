#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "abc123def";
    const char str2[] = "abc123";

    // Calculate the length of the initial segment of str1
    size_t len = strspn(str1, str2);

    // Print the result
    printf("Length of initial segment: %zu\n", len);

    return 0;
}
