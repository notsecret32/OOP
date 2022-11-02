#pragma once
#include "Figure.h"

class Triangle : public Figure
{
	double bottom = 0;
	double h = 0;
public:
	Triangle() {}
	Triangle(double bottom, double h) 
		: bottom(bottom), h(h) {}

	double FindArea() const override;

	void setBottom(double bottom) { this->bottom = bottom; }
	void setH() { this->h = h; }

	double getBottom() const { return this->bottom; }
	double getH() const { return this->h; }
};