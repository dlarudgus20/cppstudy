#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    auto ar = std::vector { 4, 1, 2, 7, 3 };
    std::cout << ar[0] << ar[1] << ar[2] << "\n";

    for (auto i : ar)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    ar.push_back(8);
    ar.push_back(9);

    for (std::size_t i = 0; i < ar.size(); ++i)
    {
        std::cout << ar[i] << ",";
    }
    std::cout << "\n";
}

