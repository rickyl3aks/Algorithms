#include <iostream>

int fibonacciLastDigit(int numb)
{
    if (numb <= 1)
        return numb;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < numb - 1; ++i)
    {
        int temporaryNumb = previous;
        previous = current;
        current = temporaryNumb + current;
    }

    return current % 10;
}

int main () {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Last digit of the " << n << "th Fibonacci number: " << fibonacciLastDigit(n) << std::endl;
    return 0;
}