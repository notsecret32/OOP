#pragma once
#include <iostream>
using namespace std;

class Object
{
protected:
	std::string name = "";
	std::string color = "";

	double weight = 0;
	double volume = 0;
public:
	Object() {}

	Object(std::string name, std::string color, double weight, double volume)
		: name(name), color(color), weight(weight), volume(volume) {

	}

	std::string getName() const { return this->name; }
	std::string getColor() const { return this->color; }
	double getWeight() const { return this->weight; }
	double getVolume() const { return this->volume; }

	void setName(std::string newName) { this->name = newName; }
	void setColor(std::string newColor) { this->color = newColor; }
	void setWeight(double newWeight) { this->weight = newWeight; }
	void setVolume(double newVolume) { this->volume = newVolume; }

	void Input();
	void Output();
};
