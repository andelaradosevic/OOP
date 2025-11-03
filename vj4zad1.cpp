#include <iostream>
#include <vector>

void input_vector(std::vector<int>& v) {
	int x;
	std::cout << "Unesite brojeve (0 za kraj): ";
	while (std::cin >> x && x != 0) v.push_back(x);
}

void print_vector(const std::vector<int>& v) {
	for (size_t i = 0; i < v.size(); ++i) {
		std::cout << v[i];
		if (i + 1 < v.size()) std::cout << " ";
	}
	std::cout << "\n";
}

int main() {
	std::vector<int> v;
	input_vector(v);
	std::cout << "Uneseni vektor: ";
	print_vector(v);
	return 0;
}