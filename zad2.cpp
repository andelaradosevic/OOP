#include "container.h"

container::container(size_t initial_capacity)
	: data(nullptr), n(0), cap(initial_capacity)
{
	if (cap > 0)
		data = new int[cap];

	std::cout << "[Konstruktor] Kreiran container (cap=" << cap << ")\n";
}

container::container(const container& other)
	: n(other.n), cap(other.cap)
{
	std::cout << "[Copy konstruktor] Kopiram container\n";

	data = (cap > 0) ? new int[cap] : nullptr;

	for (size_t i = 0; i < n; i++)
		data[i] = other.data[i];
}

container::container(container&& other) noexcept
	: data(other.data), n(other.n), cap(other.cap)
{
	std::cout << "[Move konstruktor] Premještam container\n";

	other.data = nullptr;
	other.n = 0;
	other.cap = 0;
}

container::~container()
{
	std::cout << "[Destruktor] Brišem container\n";
	delete[] data;
}

int& container::at(size_t index)
{
	if (index >= n) throw std::out_of_range("Index out of range.");
	return data[index];
}

const int& container::at(size_t index) const
{
	if (index >= n) throw std::out_of_range("Index out of range.");
	return data[index];
}

void container::clear()
{
	n = 0;
}

void container::push_back(int value)
{
	if (n == cap) {
		size_t new_cap = (cap == 0) ? 1 : cap * 2;
		std::cout << "[Realokacija] Širim kapacitet na " << new_cap << "\n";

		int* new_data = new int[new_cap];

		for (size_t i = 0; i < n; i++)
			new_data[i] = data[i];

		delete[] data;
		data = new_data;
		cap = new_cap;
	}

	data[n++] = value;
}
