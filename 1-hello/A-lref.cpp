#include <iostream>
#include <string>
#include <vector>

int main()
{
    int x = 1;
    int& rx = x;

    std::cout << x << " " << rx << "\n";
    rx = 3;
    std::cout << x << " " << rx << "\n";

    auto s = std::string { "string" };
    auto& rs = s;

    std::cout << s << " " << rs << "\n";
    s[2] = 't';
    std::cout << s << " " << rs << "\n";

    auto vt = std::vector { 1, 2, 3 };
    for (auto& x : vt)
        x *= 2;

    for (auto x : vt)
        std::cout << x << " ";
    std::cout << "\n";
}

