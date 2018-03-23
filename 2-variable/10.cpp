#include <iostream>
#include <string>

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
}

