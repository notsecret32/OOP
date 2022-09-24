#pragma once
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

template<typename T>
class Collection 
{
	std::vector<T> collection;
public:
	T operator[](int index) { return this->collection[index]; }

	size_t getLength() const { return this->collection.size(); }
	void push_back(const T item) { this->collection.push_back(item); }
	void print() {
		for (unsigned i = 0; i < this->collection.size(); i++)
		{
			cout << "[" << i << "]: " << this->collection[i] << endl;
		}
	}
	void erase(int value) {
		this->collection.erase(std::find(this->collection.begin(), this->collection.end(), value));
	}
	void eraseByIndex(int index) {
		this->collection.erase(this->collection.begin() + index);
	}
};