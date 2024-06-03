#include <iostream>
#include "Add.h"

int main() {
    int a = 5;
    int b = 3;
    int result = add(a, b);
    std::cout << "The sum of " << a << " and " << b << " is " << result << std::endl;
    return 0;
}
