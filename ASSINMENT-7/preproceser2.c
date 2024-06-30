#include <stdio.h>

#define FEATURE_A 1
#define FEATURE_B 0

int main() {
    #if FEATURE_A
        printf("Feature A is enabled.\n");
    #elif FEATURE_B
        printf("Feature B is enabled.\n");
    #else
        printf("Neither feature is enabled.\n");
    #endif
    
    return 0;
}
