#include <iostream>
#include "container.h"

container napravi_container() {
	container c;
	c.push_back(100);
	return c; 
}

void funkcija_po_vrijednosti(container c) {
	std::cout << "Primljen container po vrijednosti (size=" << c.size() << ")\n";
}

int main() {
	
	container c1;
	c1.push_back(1);
	c1.push_back(2);
	c1.push_back(3);

	container c2 = c1;


	container c3 = std::move(c1);

	
	funkcija_po_vrijednosti(c2);


	container c4 = napravi_container();

	for (int i = 0; i < 10; i++)
		c4.push_back(i);

	std::cout << "\nIspis elemenata c4:\n";
	for (size_t i = 0; i < c4.size(); i++)
		std::cout << "Index " << i << ": " << c4.at(i) << "\n";

	return 0;
}
