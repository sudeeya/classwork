#include <iostream>long double operator"" _deg(long double num) {	return num / 180.0 * 3.14159265359;}int main() {	auto angle = 1.0 + 45.0_deg;	std::cout << angle;}