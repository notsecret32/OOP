#pragma once
#include <iostream>
#include "Object.h"

class Sphere : public Object
{
	double radius = 0;
public:
	Sphere() {}
	Sphere(double radius) : radius(radius) {}
	Sphere(std::string name, std::string color, double weight, double volume, double radius) {
		this->name = name;
		this->color = color;
		this->weight = weight;
		this->volume = volume;
		this->radius = radius;
	}

	void Input();
	void Output();

	void setRadius(double newRadius) { this->radius = newRadius; }
	double getRadius() const { return this->radius; }
};

