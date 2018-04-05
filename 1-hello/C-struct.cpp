#include <iostream>
#include <vector>
#include <tuple>

enum class Fact
{
    Hwan, Suomi
};

struct Regular
{
    Fact x;
    double y;
    std::string z;
};

int main()
{
    auto x = Regular { };
    x.x = Fact::Hwan;
    x.y = 3.1;
    x.z = "do you know f-k hyperwar?";

    auto vt = std::vector { x };
    vt.push_back(Regular { Fact::Suomi, 2.7, "yes I know" });
    for (const auto& x : vt)
        std::cout << static_cast<int>(x.x) << " " << x.y << " \"" << x.z << "\"\n";

    auto z = std::tuple { 23, Regular { Fact::Hwan, 2.1, "jedi" } };
    auto& [ a, b ] = z;
    std::cout << a << " " << b.z << "\n";
}

