#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
    using namespace std::literals;

    auto x = 3ULL;
    if (typeid(x) == typeid(unsigned long long))
        std::cout << "unsigned long long\n";

    auto y = "string"s;
    if (typeid(y) == typeid(std::string))
        std::cout << "std::string\n";
}

