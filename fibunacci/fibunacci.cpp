#include <iostream>

int main()
{
    long long number;
    long long previous = 0, current = 1, result = 0;
    std::cin >> number;
    if (number == 0)
        result = previous;
    if (number == 1)
        result = current;

    for (long long i = 2; i <= number; i++)
    {
        result = previous + current;
        previous = current;
        current = result;
    }

    std::cout << result << std::endl;
}