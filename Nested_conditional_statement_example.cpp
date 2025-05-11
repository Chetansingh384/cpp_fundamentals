#include <iostream>

int main() {
    // Declare three integer variables
    int a, b, c;

    std::cout << "Enter three numbers separated by space: ";
    std::cin >> a >> b >> c;

    if (a > b && a > c) {
        std::cout << "The greatest number is: a" ;
    } 
    else if (b > c) {
        std::cout << "The greatest number is: b" ;
    } 
    else {
        std::cout << "The greatest number is: c ";
    }

    return 0;
}

