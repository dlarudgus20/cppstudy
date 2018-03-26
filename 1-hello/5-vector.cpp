#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    auto vt = std::vector { 4, 1, 2, 7, 3 };
    std::cout << vt[0] << ar[1] << ar[2] << "\n";

    for (auto i : vt)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    vt.push_back(8);
    vt.push_back(9);

    for (std::size_t i = 0; i < vt.size(); ++i)
    {
        std::cout << vt[i] << ",";
    }
    std::cout << "\n";
}

