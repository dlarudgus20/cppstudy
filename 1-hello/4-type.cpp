#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::literals;

    auto a = 0;
    auto b = 0.0;

    int c = 0;
    double d = 0.0;
    double e = 0;

    auto s1 = "asdf";
    auto s2 = "asdf"s;
    auto s3 = "asdf"sv;

    int x;
    std::string y;
    std::string_view z;

    x = 0;
    y = s1;
    z = y;
}

