#include "Triangle.h"

double Triangle::FindArea() const {
	return (1 / 2) * this->bottom * this->h;
}