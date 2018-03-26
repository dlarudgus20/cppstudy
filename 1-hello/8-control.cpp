#include <iostream>

int main()
{
    auto x = 10;
    if (x == 10)
    {
        std::cout << "x is 10\n";
    }

    if (auto y = 10; y == 10)
    {
        std::cout << "y is 10\n";
    }

    for (auto i = 10; i > 0; i /= 2)
    {
        std::cout << i << " ";
        if (i == 5)
        {
            i = 6;
            continue;
        }
    }
    std::cout << "\n";

    do
    {
        std::cout << "do-while\n";
        break;
    }
    while (1);

    for (auto i : { 2, 3, 5, 7 })
    {
        std::cout << i << ",";
    }
    std::cout << "\n";
}

