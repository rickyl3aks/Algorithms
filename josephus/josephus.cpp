#include <iostream>
#define MAGENTA "\033[35m"
#define RESET "\033[0m"
#define YELLOW "\033[33m"

int josephus (int soldiers, int steps_to_skip){
if (soldiers == 1)
    return 1;
return (josephus(soldiers - 1, steps_to_skip) + steps_to_skip - 1) % soldiers + 1;
}

    int main()
{
    int soldiers;
    int steps_to_skip;
    std::cout << "Insert number of soldiers: " << YELLOW;
    std::cin >> soldiers;
    std::cout << RESET << "Insert number of the steps to skip: " << YELLOW;
    std::cin >> steps_to_skip;
    std::cout << RESET << "the safest position is " << MAGENTA  << josephus(soldiers, steps_to_skip) << std::endl;
    return 0;
}