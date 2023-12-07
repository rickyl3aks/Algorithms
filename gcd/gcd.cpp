#include <iostream>

long long euclidian(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    std::cout << "insert the first digit: ";
    std::cin >> a;
    std::cout << "insert the second digit: ";
    std::cin >> b;
    std::cout << "The greater common divider between " << a << " and " << b << " is " << euclidian(a, b) << std::endl;
    return 0;
}