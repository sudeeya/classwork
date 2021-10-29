#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& stream, const std::vector<int>& v) {
    for (std::vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return stream;
}

void Append(std::vector<int>& first, const std::vector<int>& second) {
    std::copy(second.begin(), second.end(), std::back_inserter(first));
}

int main() {
    std::vector<int> a{ 4, 8, 15, 16, 23, 42 };
    std::vector<int> b{ 13, 6, 7 };
    Append(a, b);
    std::cout << a << std::endl;
}