#include <iostream>
#include <tuple>
#include <vector>
#include <string>

int main()
{
    using namespace std::literals;

    auto tu = std::tuple { 1.4, "string"s };

    std::cout << std::get<0>(tu) << " " << std::get<1>(tu) << "\n";

    {
        auto [ n, s ] = tu;
        std::cout << n << " " << s << "\n";
    }

    auto vt = std::vector {
        std::tuple { 0.0, "F" },
        std::tuple { 2.0, "재수강" },
        std::tuple { 3.0, "다신 만나지 말자" },
        std::tuple { 4.5, "???" }
    };
    for (auto [ n, s ] : vt)
    {
        std::cout << n << ":" << s << "\n";
    }
}

