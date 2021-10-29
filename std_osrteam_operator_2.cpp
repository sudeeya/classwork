#include <iostream>
#include <set>

int main() {
    std::set<std::string> a{ "Cat", "Dog", "Mouse", "Elephant" };
    std::ostream_iterator<std::string> it{ std::cout, "\n" };
    for (std::set<std::string>::iterator a_it = a.begin(); a_it != a.end(); ++a_it) {
        it = *a_it;
    }
}