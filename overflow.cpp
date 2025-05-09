#include <iostream>
#include <climits>  // For INT_MAX

int main() {
    int a = INT_MAX;  
    std::cout << "Initial value (INT_MAX): " << a << std::endl;
    a = a + 1;  // This causes overflow
    std::cout << "After overflow (INT_MAX + 1): " << a << std::endl;

    return 0;
}
