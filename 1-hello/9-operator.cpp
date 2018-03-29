#include <iostream>
#include <string>

int main()
{
    using namespace std::literals;

    auto a = 1;
    auto b = 2;
    auto c = a + b;
    b = a = c;

    auto d = ((a + b) * c) | 0xf0;

    auto x = "c++"s;
    auto y = "17"s;
    auto z = x + y;

    auto e = a << d;
    [[maybe_unused]]
    auto f = (a << b) << c;

    (std::cout << z) << "\n";

    (void)e;
}

