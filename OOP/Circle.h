#pragma once
#include "Figure.h"

class Circle : public Figure 
{
	double radius = 0;
public:
	Circle() {}
	Circle(double radius)
		: radius(radius) {	}

	double FindArea() const override;

	void setRadius(double radius) { this->radius = radius; }
	double getRadius() const { return this->radius; }
};