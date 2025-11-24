#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>

class container {
private:
	int* data;
	size_t n;
	size_t cap;

public:
	explicit container(size_t initial_capacity = 0);

	
	container(const container& other);

	container(container&& other) noexcept;

	~container();

	void push_back(int value);
	size_t size() const { return n; }
	size_t capacity() const { return cap; }

	int& at(size_t index);
	const int& at(size_t index) const;

	void clear();
};


#endif
