#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{ 7, 5, 54, 81, 3, 15, 0 };
    std::ostream_iterator<int> it{ std::cout, " " };
    for (std::vector<int>::iterator v_it = v.begin(); v_it != v.end(); ++v_it) {
        it = *v_it;
    }
}