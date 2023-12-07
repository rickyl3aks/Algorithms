#include <iostream>

int sum (int a, int b){
    return a + b;
}

int main () {
    int a, b;
    std::cout << "insert first digit: ";
    std::cin >> a;
    std::cout << "insert first digit: ";
    std::cin >> b;
    std::cout << "The sum of " << a << " and " << b << " is " << sum(a, b) << std::endl;
    return 0;
}