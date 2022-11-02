#pragma once
#include <iostream>
#include <vector>
#include <fstream>
using std::cout;
using std::endl;

template<typename T>
class ArrayReader
{
	std::vector<T> container;
public:
	void push_back(T& item);
	void AddToContainer(std::vector<T> _container);
	void WriteToFile();

	friend std::ostream& operator<<(std::ostream& os, const ArrayReader<T> obj) {
		for (size_t i = 0; i < obj.container.size(); i++)
		{
			os << obj.container[i] << " ";
		}

		return os;
	}
};

template<typename T>
inline void ArrayReader<T>::push_back(T& item)
{
	this->container.push_back(item);
}

template<typename T>
inline void ArrayReader<T>::AddToContainer(std::vector<T> _container)
{
	this->container = _container;
}

template<typename T>
inline void ArrayReader<T>::WriteToFile()
{
	std::ofstream out;

	out.open("output.txt");

	if (out.is_open()) {
		out << *this;
	}

	out.close();
	cout << "The file has been saved successfully!" << endl;
}
