#include <iostream>
#include <string>

int main()
{
    auto str = std::string { };
    while (getline(std::cin, str))
    {
        std::cout << str;
    }
}

