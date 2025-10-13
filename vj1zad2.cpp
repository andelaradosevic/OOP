#include <iostream>

int clamp(int value, int low = 0, int high = 10) {
	if (value < low) return low;
	if (value > high) return high;
	return value;
}

double clamp(double value, double low = 0.0, double high = 10.0) {
	if (value < low) return low;
	if (value > high) return high;
	return value;
}

int main() {
	std::cout << clamp(15) << std::endl;
	std::cout << clamp(-3) << std::endl;
	std::cout << clamp(5) << std::endl;

	std::cout << clamp(12.7) << std::endl;
	std::cout << clamp(-2.3) << std::endl;
	std::cout << clamp(4.5) << std::endl;
	return 0;
}