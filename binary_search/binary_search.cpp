#include <iostream>
#define MAGENTA "\033[1m\033[35m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

long long binary_search(long long array[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        int value = array[middle];

        std::cout << "middle " << BLUE << value << RESET << std::endl;

        if (value < target)
            low = middle + 1;
        else if (value > target)
            high = middle - 1;
        else
            return middle; 
    }

    return -1; 
}

int main()
{
    long long array_size;
    std::cout << "Enter the size of the array: "<< MAGENTA;
    std::cin >> array_size;
    std::cout << RESET;

    long long *arr = new long long[array_size];

    for (int i = 0; i < array_size; ++i)
    {
        arr[i] = i + 1;
    }

    int value;

    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Insert the value you want to find in the array: " << MAGENTA;
    std::cin >> value;
    std::cout << RESET;
    int result = binary_search(arr, array_size, value);

    if (result != -1)
        std::cout << "The value " << BLUE << value << RESET << " is found at index " << MAGENTA << result << std::endl;
    else
        std::cout << "The value " << BLUE << value << RESET << " is not found in the array." << std::endl;

    delete[] arr;

    return 0;
}
