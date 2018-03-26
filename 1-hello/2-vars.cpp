#include <iostream>
#include <string>
#include <string_view>

auto main() -> int
{
    using namespace std::literals;

    auto x = 10;
    auto y = 20;
    std::cout << x << " + " << y << " = " << (x + y) << "\n";

    auto i = int { };
    auto d = double { };
    auto s = std::string { };

    std::cout << "input:\n"s;
    std::cin >> i >> d >> s;

    if (std::cin)
    {
        std::cout << i << "\n";
        std::cout << d << "\n";
        std::cout << s << "\n";
        std::cout << "done.\n"sv;
    }
    else
    {
        std::cerr << "invalid inputs\n";
    }
}

