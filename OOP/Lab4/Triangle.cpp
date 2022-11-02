#include "Triangle.h"

double Triangle::FindArea() const {
	return (1.0 / 2.0) * this->bottom * this->h;
}