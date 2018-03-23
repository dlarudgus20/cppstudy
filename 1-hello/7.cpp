#include <iostream>
#include <map>
#include <vector>

int main()
{
    auto vt = std::vector<int> { 1, 2, 3 };
    auto mp = std::map<double, std::string> {
        { 1.0, "a" },
        { 2.0, "b" },
        { 3.14, "pi" },
    };

    std::cout << mp[3.14] << "\n";
    mp[2.71] = "e";

    for (auto [ x, s ] : mp)
    {
        std::cout << "{ " << x << ", \"" << s << "\" },\n";
    }
}

