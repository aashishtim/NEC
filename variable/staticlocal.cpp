#include <iostream>

void counter() {
    static int count = 0; // Static local variable
    count++;
    std::cout << "Count is " << count << std::endl;
}

int main() {
    counter(); // Output: Count is 1
    counter(); // Output: Count is 2
    counter(); // Output: Count is 3
    return 0;
}
