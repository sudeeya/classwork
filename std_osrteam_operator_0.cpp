#include <iostream>

int main() {
    std::ostream_iterator<int> it{ std::cout, " + " };
    for (size_t i = 1; i < 100; ++i)
        it = i;
    std::cout << 100;
}