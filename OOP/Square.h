#pragma once
#include "Figure.h"

class Square : public Figure
{
public:
	double FindArea() const override;
};