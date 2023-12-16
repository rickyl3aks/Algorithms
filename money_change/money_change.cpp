#include <iostream>
#include <vector>
#define MAGENTA "\033[35m"
#define RESET "\033[0m"
#define YELLOW "\033[33m"

int change(int money, const std::vector<int> &denominations)
{
    if (money == 0)
    {
        return 0;
    }

    int max_coin = 0;
    for (int denomination : denominations)
    {
        if (denomination <= money && denomination > max_coin)
        {
            max_coin = denomination;
        }
    }

    return 1 + change(money - max_coin, denominations);
}

int main()
{
    std::vector<int> denominations = {1, 4, 6};
    int money = 8;                                                 

    int result = change(money, denominations);

    std::cout << "Number of ways to make change: " << result << std::endl;

    return 0;
}
