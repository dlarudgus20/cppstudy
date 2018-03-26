#include <iostream>
#include <string>

void foo()
{
    std::cout << "foo()\n";
}

int bar(int x)
{
    std::cout << "bar(" << x << ")\n";
    return x * 2;
}

auto baz(std::string s, int t)
{
    std::cout << "baz(\"" << s << "\", " << t << ")\n";
    return s + s;
}

auto qux(int, double)
{
    std::cout << "quz(int, double)\n";
    return 3.14159;
}

int main()
{
    foo();
    std::cout << bar(42) << "\n";
    std::cout << baz("qt", 64) << "\n";
    std::cout << qux(2327, 2.17) << "\n";
}

