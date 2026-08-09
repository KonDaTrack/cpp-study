#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using a lambda function to print each element in the vector
    std::for_each(vec.begin(), vec.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using a lambda function to calculate the sum of elements in the vector
    int sum = 0;
    std::for_each(vec.begin(), vec.end(), [&sum](int n) {
        sum += n;
    });
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}